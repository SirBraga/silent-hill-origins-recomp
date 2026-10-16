#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027E4D8
// Address: 0x27e4d8 - 0x27e608
void sub_0027E4D8_0x27e4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E4D8_0x27e4d8");
#endif

    switch (ctx->pc) {
        case 0x27e4d8u: goto label_27e4d8;
        case 0x27e4dcu: goto label_27e4dc;
        case 0x27e4e0u: goto label_27e4e0;
        case 0x27e4e4u: goto label_27e4e4;
        case 0x27e4e8u: goto label_27e4e8;
        case 0x27e4ecu: goto label_27e4ec;
        case 0x27e4f0u: goto label_27e4f0;
        case 0x27e4f4u: goto label_27e4f4;
        case 0x27e4f8u: goto label_27e4f8;
        case 0x27e4fcu: goto label_27e4fc;
        case 0x27e500u: goto label_27e500;
        case 0x27e504u: goto label_27e504;
        case 0x27e508u: goto label_27e508;
        case 0x27e50cu: goto label_27e50c;
        case 0x27e510u: goto label_27e510;
        case 0x27e514u: goto label_27e514;
        case 0x27e518u: goto label_27e518;
        case 0x27e51cu: goto label_27e51c;
        case 0x27e520u: goto label_27e520;
        case 0x27e524u: goto label_27e524;
        case 0x27e528u: goto label_27e528;
        case 0x27e52cu: goto label_27e52c;
        case 0x27e530u: goto label_27e530;
        case 0x27e534u: goto label_27e534;
        case 0x27e538u: goto label_27e538;
        case 0x27e53cu: goto label_27e53c;
        case 0x27e540u: goto label_27e540;
        case 0x27e544u: goto label_27e544;
        case 0x27e548u: goto label_27e548;
        case 0x27e54cu: goto label_27e54c;
        case 0x27e550u: goto label_27e550;
        case 0x27e554u: goto label_27e554;
        case 0x27e558u: goto label_27e558;
        case 0x27e55cu: goto label_27e55c;
        case 0x27e560u: goto label_27e560;
        case 0x27e564u: goto label_27e564;
        case 0x27e568u: goto label_27e568;
        case 0x27e56cu: goto label_27e56c;
        case 0x27e570u: goto label_27e570;
        case 0x27e574u: goto label_27e574;
        case 0x27e578u: goto label_27e578;
        case 0x27e57cu: goto label_27e57c;
        case 0x27e580u: goto label_27e580;
        case 0x27e584u: goto label_27e584;
        case 0x27e588u: goto label_27e588;
        case 0x27e58cu: goto label_27e58c;
        case 0x27e590u: goto label_27e590;
        case 0x27e594u: goto label_27e594;
        case 0x27e598u: goto label_27e598;
        case 0x27e59cu: goto label_27e59c;
        case 0x27e5a0u: goto label_27e5a0;
        case 0x27e5a4u: goto label_27e5a4;
        case 0x27e5a8u: goto label_27e5a8;
        case 0x27e5acu: goto label_27e5ac;
        case 0x27e5b0u: goto label_27e5b0;
        case 0x27e5b4u: goto label_27e5b4;
        case 0x27e5b8u: goto label_27e5b8;
        case 0x27e5bcu: goto label_27e5bc;
        case 0x27e5c0u: goto label_27e5c0;
        case 0x27e5c4u: goto label_27e5c4;
        case 0x27e5c8u: goto label_27e5c8;
        case 0x27e5ccu: goto label_27e5cc;
        case 0x27e5d0u: goto label_27e5d0;
        case 0x27e5d4u: goto label_27e5d4;
        case 0x27e5d8u: goto label_27e5d8;
        case 0x27e5dcu: goto label_27e5dc;
        case 0x27e5e0u: goto label_27e5e0;
        case 0x27e5e4u: goto label_27e5e4;
        case 0x27e5e8u: goto label_27e5e8;
        case 0x27e5ecu: goto label_27e5ec;
        case 0x27e5f0u: goto label_27e5f0;
        case 0x27e5f4u: goto label_27e5f4;
        case 0x27e5f8u: goto label_27e5f8;
        case 0x27e5fcu: goto label_27e5fc;
        case 0x27e600u: goto label_27e600;
        case 0x27e604u: goto label_27e604;
        default: break;
    }

    ctx->pc = 0x27e4d8u;

label_27e4d8:
    // 0x27e4d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27e4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_27e4dc:
    // 0x27e4dc: 0x8f8287f0  lw          $v0, -0x7810($gp)
    ctx->pc = 0x27e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
label_27e4e0:
    // 0x27e4e0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x27e4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_27e4e4:
    // 0x27e4e4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x27e4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_27e4e8:
    // 0x27e4e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27e4ec:
    // 0x27e4ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x27e4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_27e4f0:
    // 0x27e4f0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x27e4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_27e4f4:
    // 0x27e4f4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x27e4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_27e4f8:
    // 0x27e4f8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x27e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_27e4fc:
    // 0x27e4fc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x27e4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_27e500:
    // 0x27e500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27e504:
    // 0x27e504: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27e504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27e508:
    // 0x27e508: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x27e508u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27e50c:
    // 0x27e50c: 0x12800031  beqz        $s4, . + 4 + (0x31 << 2)
label_27e510:
    if (ctx->pc == 0x27E510u) {
        ctx->pc = 0x27E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E50Cu;
        // 0x27e510: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E514u;
        goto label_27e514;
    }
    ctx->pc = 0x27E50Cu;
    {
        const bool branch_taken_0x27e50c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E50Cu;
        // 0x27e510: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e50c) {
            ctx->pc = 0x27E5D4u;
            goto label_27e5d4;
        }
    }
    ctx->pc = 0x27E514u;
label_27e514:
    // 0x27e514: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27e518:
    // 0x27e518: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x27e518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27e51c:
    // 0x27e51c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_27e520:
    if (ctx->pc == 0x27E520u) {
        ctx->pc = 0x27E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E51Cu;
        // 0x27e520: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E524u;
        goto label_27e524;
    }
    ctx->pc = 0x27E51Cu;
    {
        const bool branch_taken_0x27e51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E51Cu;
        // 0x27e520: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e51c) {
            ctx->pc = 0x27E5D4u;
            goto label_27e5d4;
        }
    }
    ctx->pc = 0x27E524u;
label_27e524:
    // 0x27e524: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x27e524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_27e528:
    // 0x27e528: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x27e528u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27e52c:
    // 0x27e52c: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x27e52cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_27e530:
    // 0x27e530: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x27e530u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e534:
    // 0x27e534: 0x0  nop
    ctx->pc = 0x27e534u;
    // NOP
label_27e538:
    // 0x27e538: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x27e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_27e53c:
    // 0x27e53c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x27e53cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_27e540:
    // 0x27e540: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x27e540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_27e544:
    // 0x27e544: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x27e544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27e548:
    // 0x27e548: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_27e54c:
    if (ctx->pc == 0x27E54Cu) {
        ctx->pc = 0x27E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E548u;
        // 0x27e54c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E550u;
        goto label_27e550;
    }
    ctx->pc = 0x27E548u;
    {
        const bool branch_taken_0x27e548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E548u;
        // 0x27e54c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e548) {
            ctx->pc = 0x27E564u;
            goto label_27e564;
        }
    }
    ctx->pc = 0x27E550u;
label_27e550:
    // 0x27e550: 0x8ec200f4  lw          $v0, 0xF4($s6)
    ctx->pc = 0x27e550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 244)));
label_27e554:
    // 0x27e554: 0x40f809  jalr        $v0
label_27e558:
    if (ctx->pc == 0x27E558u) {
        ctx->pc = 0x27E55Cu;
        goto label_27e55c;
    }
    ctx->pc = 0x27E554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27E55Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E554u, 0x27E55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E55Cu;
label_27e55c:
    // 0x27e55c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x27e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27e560:
    // 0x27e560: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x27e560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27e564:
    // 0x27e564: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x27e564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_27e568:
    // 0x27e568: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x27e568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27e56c:
    // 0x27e56c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x27e56cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_27e570:
    // 0x27e570: 0x32240010  andi        $a0, $s1, 0x10
    ctx->pc = 0x27e570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
label_27e574:
    // 0x27e574: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x27e574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_27e578:
    // 0x27e578: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x27e578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27e57c:
    // 0x27e57c: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x27e57cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_27e580:
    // 0x27e580: 0x32230008  andi        $v1, $s1, 0x8
    ctx->pc = 0x27e580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_27e584:
    // 0x27e584: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x27e584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_27e588:
    // 0x27e588: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x27e588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_27e58c:
    // 0x27e58c: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x27e58cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
label_27e590:
    // 0x27e590: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x27e590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_27e594:
    // 0x27e594: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27e598:
    if (ctx->pc == 0x27E598u) {
        ctx->pc = 0x27E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E594u;
        // 0x27e598: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E59Cu;
        goto label_27e59c;
    }
    ctx->pc = 0x27E594u;
    {
        const bool branch_taken_0x27e594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E594u;
        // 0x27e598: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e594) {
            ctx->pc = 0x27E5B0u;
            goto label_27e5b0;
        }
    }
    ctx->pc = 0x27E59Cu;
label_27e59c:
    // 0x27e59c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x27e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_27e5a0:
    // 0x27e5a0: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x27e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_27e5a4:
    // 0x27e5a4: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x27e5a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27e5a8:
    // 0x27e5a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_27e5ac:
    if (ctx->pc == 0x27E5ACu) {
        ctx->pc = 0x27E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5A8u;
        // 0x27e5ac: 0x929021  addu        $s2, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E5B0u;
        goto label_27e5b0;
    }
    ctx->pc = 0x27E5A8u;
    {
        const bool branch_taken_0x27e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5A8u;
        // 0x27e5ac: 0x929021  addu        $s2, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5a8) {
            ctx->pc = 0x27E5BCu;
            goto label_27e5bc;
        }
    }
    ctx->pc = 0x27E5B0u;
label_27e5b0:
    // 0x27e5b0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x27e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_27e5b4:
    // 0x27e5b4: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x27e5b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27e5b8:
    // 0x27e5b8: 0x729021  addu        $s2, $v1, $s2
    ctx->pc = 0x27e5b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_27e5bc:
    // 0x27e5bc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27e5c0:
    // 0x27e5c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27e5c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_27e5c4:
    // 0x27e5c4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x27e5c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_27e5c8:
    // 0x27e5c8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x27e5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27e5cc:
    // 0x27e5cc: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_27e5d0:
    if (ctx->pc == 0x27E5D0u) {
        ctx->pc = 0x27E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5CCu;
        // 0x27e5d0: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E5D4u;
        goto label_27e5d4;
    }
    ctx->pc = 0x27E5CCu;
    {
        const bool branch_taken_0x27e5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5CCu;
        // 0x27e5d0: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e5cc) {
            ctx->pc = 0x27E538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e538;
        }
    }
    ctx->pc = 0x27E5D4u;
label_27e5d4:
    // 0x27e5d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27e5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27e5d8:
    // 0x27e5d8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x27e5d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27e5dc:
    // 0x27e5dc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x27e5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27e5e0:
    // 0x27e5e0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x27e5e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27e5e4:
    // 0x27e5e4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x27e5e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27e5e8:
    // 0x27e5e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27e5e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27e5ec:
    // 0x27e5ec: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x27e5ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27e5f0:
    // 0x27e5f0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x27e5f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27e5f4:
    // 0x27e5f4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x27e5f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27e5f8:
    // 0x27e5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27e5fc:
    // 0x27e5fc: 0x3e00008  jr          $ra
label_27e600:
    if (ctx->pc == 0x27E600u) {
        ctx->pc = 0x27E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5FCu;
        // 0x27e600: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E604u;
        goto label_27e604;
    }
    ctx->pc = 0x27E5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E5FCu;
        // 0x27e600: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E604u;
label_27e604:
    // 0x27e604: 0x0  nop
    ctx->pc = 0x27e604u;
    // NOP
    ctx->pc = 0x27e608u;
}
