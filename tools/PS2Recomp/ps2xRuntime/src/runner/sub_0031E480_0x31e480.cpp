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

// Function: sub_0031E480
// Address: 0x31e480 - 0x31e6b0
void sub_0031E480_0x31e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E480_0x31e480");
#endif

    switch (ctx->pc) {
        case 0x31e4d0u: goto label_31e4d0;
        case 0x31e584u: goto label_31e584;
        case 0x31e59cu: goto label_31e59c;
        case 0x31e5a8u: goto label_31e5a8;
        case 0x31e5e8u: goto label_31e5e8;
        default: break;
    }

    ctx->pc = 0x31e480u;

    // 0x31e480: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x31e484: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x31e484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x31e488: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x31e488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x31e48c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x31e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x31e490: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x31e490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x31e494: 0x3c1e006b  lui         $fp, 0x6B
    ctx->pc = 0x31e494u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)107 << 16));
    // 0x31e498: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x31e498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x31e49c: 0x27c511d1  addiu       $a1, $fp, 0x11D1
    ctx->pc = 0x31e49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4561));
    // 0x31e4a0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x31e4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x31e4a4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x31e4a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e4a8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x31e4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x31e4ac: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x31e4acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e4b0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x31e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x31e4b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31e4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31e4b8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x31e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x31e4bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31e4c0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x31e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x31e4c4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x31e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x31e4c8: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x31e4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31e4cc: 0x0  nop
    ctx->pc = 0x31e4ccu;
    // NOP
label_31e4d0:
    // 0x31e4d0: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x31e4d0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31e4d4: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x31e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x31e4d8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x31e4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31e4dc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x31e4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x31e4e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31E4E0u;
    {
        const bool branch_taken_0x31e4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4E0u;
        // 0x31e4e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e4e0) {
            ctx->pc = 0x31E4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e4d0;
        }
    }
    ctx->pc = 0x31E4E8u;
    // 0x31e4e8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x31e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x31e4ec: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E4ECu;
    {
        const bool branch_taken_0x31e4ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x31E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4ECu;
        // 0x31e4f0: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e4ec) {
            ctx->pc = 0x31E500u;
            goto label_31e500;
        }
    }
    ctx->pc = 0x31E4F4u;
    // 0x31e4f4: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x31e4f4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31e4f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31E4F8u;
    {
        const bool branch_taken_0x31e4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4F8u;
        // 0x31e4fc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e4f8) {
            ctx->pc = 0x31E50Cu;
            goto label_31e50c;
        }
    }
    ctx->pc = 0x31E500u;
label_31e500:
    // 0x31e500: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E500u;
    {
        const bool branch_taken_0x31e500 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x31e500) {
            ctx->pc = 0x31E510u;
            goto label_31e510;
        }
    }
    ctx->pc = 0x31E508u;
    // 0x31e508: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x31e508u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_31e50c:
    // 0x31e50c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31e50cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31e510:
    // 0x31e510: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E510u;
    {
        const bool branch_taken_0x31e510 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E510u;
        // 0x31e514: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e510) {
            ctx->pc = 0x31E520u;
            goto label_31e520;
        }
    }
    ctx->pc = 0x31E518u;
    // 0x31e518: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31E518u;
    {
        const bool branch_taken_0x31e518 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x31e518) {
            ctx->pc = 0x31E54Cu;
            goto label_31e54c;
        }
    }
    ctx->pc = 0x31E520u;
label_31e520:
    // 0x31e520: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x31e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x31e524: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31E524u;
    {
        const bool branch_taken_0x31e524 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x31E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E524u;
        // 0x31e528: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e524) {
            ctx->pc = 0x31E54Cu;
            goto label_31e54c;
        }
    }
    ctx->pc = 0x31E52Cu;
    // 0x31e52c: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x31e52cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31e530: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E530u;
    {
        const bool branch_taken_0x31e530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E530u;
        // 0x31e534: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e530) {
            ctx->pc = 0x31E540u;
            goto label_31e540;
        }
    }
    ctx->pc = 0x31E538u;
    // 0x31e538: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E538u;
    {
        const bool branch_taken_0x31e538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31e538) {
            ctx->pc = 0x31E54Cu;
            goto label_31e54c;
        }
    }
    ctx->pc = 0x31E540u;
label_31e540:
    // 0x31e540: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x31e540u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x31e544: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x31e544u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31e548: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x31e548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_31e54c:
    // 0x31e54c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E54Cu;
    {
        const bool branch_taken_0x31e54c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E54Cu;
        // 0x31e550: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e54c) {
            ctx->pc = 0x31E560u;
            goto label_31e560;
        }
    }
    ctx->pc = 0x31E554u;
    // 0x31e554: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x31e554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31e558: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x31e558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x31e55c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x31e55cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
label_31e560:
    // 0x31e560: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31e560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e564: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x31e564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x31e568: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x31e568u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e56c: 0x14a07a  dsrl        $s4, $s4, 1
    ctx->pc = 0x31e56cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 1);
    // 0x31e570: 0x57a00b  movn        $s4, $v0, $s7
    ctx->pc = 0x31e570u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2));
    // 0x31e574: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x31e574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e578: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31e578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e57c: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x31E57Cu;
    SET_GPR_U32(ctx, 31, 0x31E584u);
    ctx->pc = 0x31E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E57Cu;
    // 0x31e580: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x31E57Cu, 0x31E584u)) {
        return;
    }
    ctx->pc = 0x31E584u;
label_31e584:
    // 0x31e584: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x31e584u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e588: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31e588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e58c: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x31e58cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e590: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x31e590u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x31e594: 0xc07db0a  jal         func_1F6C28
    ctx->pc = 0x31E594u;
    SET_GPR_U32(ctx, 31, 0x31E59Cu);
    ctx->pc = 0x31E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E594u;
    // 0x31e598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x31E594u, 0x31E59Cu)) {
        return;
    }
    ctx->pc = 0x31E59Cu;
label_31e59c:
    // 0x31e59c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31e59cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e5a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31E5A0u;
    {
        const bool branch_taken_0x31e5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5A0u;
        // 0x31e5a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5a0) {
            ctx->pc = 0x31E5F4u;
            goto label_31e5f4;
        }
    }
    ctx->pc = 0x31E5A8u;
label_31e5a8:
    // 0x31e5a8: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x31e5a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x31e5ac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x31E5ACu;
    {
        const bool branch_taken_0x31e5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e5ac) {
            ctx->pc = 0x31E62Cu;
            goto label_31e62c;
        }
    }
    ctx->pc = 0x31E5B4u;
    // 0x31e5b4: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x31E5B4u;
    {
        const bool branch_taken_0x31e5b4 = (GPR_S64(ctx, 21) < 0);
        ctx->pc = 0x31E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5B4u;
        // 0x31e5b8: 0x284102b  sltu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5b4) {
            ctx->pc = 0x31E5D8u;
            goto label_31e5d8;
        }
    }
    ctx->pc = 0x31E5BCu;
    // 0x31e5bc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x31E5BCu;
    {
        const bool branch_taken_0x31e5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e5bc) {
            ctx->pc = 0x31E5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E5BCu;
            // 0x31e5c0: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E5ECu;
            goto label_31e5ec;
        }
    }
    ctx->pc = 0x31E5C4u;
    // 0x31e5c4: 0x14940006  bne         $a0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x31E5C4u;
    {
        const bool branch_taken_0x31e5c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x31E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5C4u;
        // 0x31e5c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5c4) {
            ctx->pc = 0x31E5E0u;
            goto label_31e5e0;
        }
    }
    ctx->pc = 0x31E5CCu;
    // 0x31e5cc: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x31e5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x31e5d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E5D0u;
    {
        const bool branch_taken_0x31e5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e5d0) {
            ctx->pc = 0x31E5E0u;
            goto label_31e5e0;
        }
    }
    ctx->pc = 0x31E5D8u;
label_31e5d8:
    // 0x31e5d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31E5D8u;
    {
        const bool branch_taken_0x31e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5D8u;
        // 0x31e5dc: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5d8) {
            ctx->pc = 0x31E5ECu;
            goto label_31e5ec;
        }
    }
    ctx->pc = 0x31E5E0u;
label_31e5e0:
    // 0x31e5e0: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x31E5E0u;
    SET_GPR_U32(ctx, 31, 0x31E5E8u);
    ctx->pc = 0x31E5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E5E0u;
    // 0x31e5e4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x31E5E0u, 0x31E5E8u)) {
        return;
    }
    ctx->pc = 0x31E5E8u;
label_31e5e8:
    // 0x31e5e8: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x31e5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_31e5ec:
    // 0x31e5ec: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x31e5ecu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31e5f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31e5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31e5f4:
    // 0x31e5f4: 0x27c211d1  addiu       $v0, $fp, 0x11D1
    ctx->pc = 0x31e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4561));
    // 0x31e5f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x31e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x31e5fc: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x31e5fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31e600: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x31e600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x31e604: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E604u;
    {
        const bool branch_taken_0x31e604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E604u;
        // 0x31e608: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e604) {
            ctx->pc = 0x31E614u;
            goto label_31e614;
        }
    }
    ctx->pc = 0x31E60Cu;
    // 0x31e60c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x31E60Cu;
    {
        const bool branch_taken_0x31e60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E60Cu;
        // 0x31e610: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e60c) {
            ctx->pc = 0x31E5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e5a8;
        }
    }
    ctx->pc = 0x31E614u;
label_31e614:
    // 0x31e614: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E614u;
    {
        const bool branch_taken_0x31e614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E614u;
        // 0x31e618: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e614) {
            ctx->pc = 0x31E62Cu;
            goto label_31e62c;
        }
    }
    ctx->pc = 0x31E61Cu;
    // 0x31e61c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x31e61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x31e620: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x31e620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x31e624: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x31E624u;
    {
        const bool branch_taken_0x31e624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E624u;
        // 0x31e628: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e624) {
            ctx->pc = 0x31E5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e5a8;
        }
    }
    ctx->pc = 0x31E62Cu;
label_31e62c:
    // 0x31e62c: 0x6a1000a  bgez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x31E62Cu;
    {
        const bool branch_taken_0x31e62c = (GPR_S64(ctx, 21) >= 0);
        ctx->pc = 0x31E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E62Cu;
        // 0x31e630: 0x4102f  dsubu       $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e62c) {
            ctx->pc = 0x31E658u;
            goto label_31e658;
        }
    }
    ctx->pc = 0x31E634u;
    // 0x31e634: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31e634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e638: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x31e638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x31e63c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x31e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e640: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x31e640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x31e644: 0x57200b  movn        $a0, $v0, $s7
    ctx->pc = 0x31e644u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
    // 0x31e648: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x31e648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x31e64c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x31e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e650: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E650u;
    {
        const bool branch_taken_0x31e650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E650u;
        // 0x31e654: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e650) {
            ctx->pc = 0x31E65Cu;
            goto label_31e65c;
        }
    }
    ctx->pc = 0x31E658u;
label_31e658:
    // 0x31e658: 0x57200b  movn        $a0, $v0, $s7
    ctx->pc = 0x31e658u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
label_31e65c:
    // 0x31e65c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e660: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E660u;
    {
        const bool branch_taken_0x31e660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E660u;
        // 0x31e664: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e660) {
            ctx->pc = 0x31E678u;
            goto label_31e678;
        }
    }
    ctx->pc = 0x31E668u;
    // 0x31e668: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x31e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x31e66c: 0x75100a  movz        $v0, $v1, $s5
    ctx->pc = 0x31e66cu;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x31e670: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x31e670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e674: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x31e674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_31e678:
    // 0x31e678: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x31e678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31e67c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31e67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e680: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x31e680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31e684: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x31e684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31e688: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x31e688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31e68c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x31e68cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31e690: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31e690u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31e694: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x31e694u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31e698: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x31e698u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e69c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x31e69cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e6a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x31E6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6A4u;
        // 0x31e6a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E6ACu;
    // 0x31e6ac: 0x0  nop
    ctx->pc = 0x31e6acu;
    // NOP
    ctx->pc = 0x31e6b0u;
}
