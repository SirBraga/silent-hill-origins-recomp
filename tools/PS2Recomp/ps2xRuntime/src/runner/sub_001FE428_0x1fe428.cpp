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

// Function: sub_001FE428
// Address: 0x1fe428 - 0x1fe548
void sub_001FE428_0x1fe428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE428_0x1fe428");
#endif

    switch (ctx->pc) {
        case 0x1fe428u: goto label_1fe428;
        case 0x1fe42cu: goto label_1fe42c;
        case 0x1fe430u: goto label_1fe430;
        case 0x1fe434u: goto label_1fe434;
        case 0x1fe438u: goto label_1fe438;
        case 0x1fe43cu: goto label_1fe43c;
        case 0x1fe440u: goto label_1fe440;
        case 0x1fe444u: goto label_1fe444;
        case 0x1fe448u: goto label_1fe448;
        case 0x1fe44cu: goto label_1fe44c;
        case 0x1fe450u: goto label_1fe450;
        case 0x1fe454u: goto label_1fe454;
        case 0x1fe458u: goto label_1fe458;
        case 0x1fe45cu: goto label_1fe45c;
        case 0x1fe460u: goto label_1fe460;
        case 0x1fe464u: goto label_1fe464;
        case 0x1fe468u: goto label_1fe468;
        case 0x1fe46cu: goto label_1fe46c;
        case 0x1fe470u: goto label_1fe470;
        case 0x1fe474u: goto label_1fe474;
        case 0x1fe478u: goto label_1fe478;
        case 0x1fe47cu: goto label_1fe47c;
        case 0x1fe480u: goto label_1fe480;
        case 0x1fe484u: goto label_1fe484;
        case 0x1fe488u: goto label_1fe488;
        case 0x1fe48cu: goto label_1fe48c;
        case 0x1fe490u: goto label_1fe490;
        case 0x1fe494u: goto label_1fe494;
        case 0x1fe498u: goto label_1fe498;
        case 0x1fe49cu: goto label_1fe49c;
        case 0x1fe4a0u: goto label_1fe4a0;
        case 0x1fe4a4u: goto label_1fe4a4;
        case 0x1fe4a8u: goto label_1fe4a8;
        case 0x1fe4acu: goto label_1fe4ac;
        case 0x1fe4b0u: goto label_1fe4b0;
        case 0x1fe4b4u: goto label_1fe4b4;
        case 0x1fe4b8u: goto label_1fe4b8;
        case 0x1fe4bcu: goto label_1fe4bc;
        case 0x1fe4c0u: goto label_1fe4c0;
        case 0x1fe4c4u: goto label_1fe4c4;
        case 0x1fe4c8u: goto label_1fe4c8;
        case 0x1fe4ccu: goto label_1fe4cc;
        case 0x1fe4d0u: goto label_1fe4d0;
        case 0x1fe4d4u: goto label_1fe4d4;
        case 0x1fe4d8u: goto label_1fe4d8;
        case 0x1fe4dcu: goto label_1fe4dc;
        case 0x1fe4e0u: goto label_1fe4e0;
        case 0x1fe4e4u: goto label_1fe4e4;
        case 0x1fe4e8u: goto label_1fe4e8;
        case 0x1fe4ecu: goto label_1fe4ec;
        case 0x1fe4f0u: goto label_1fe4f0;
        case 0x1fe4f4u: goto label_1fe4f4;
        case 0x1fe4f8u: goto label_1fe4f8;
        case 0x1fe4fcu: goto label_1fe4fc;
        case 0x1fe500u: goto label_1fe500;
        case 0x1fe504u: goto label_1fe504;
        case 0x1fe508u: goto label_1fe508;
        case 0x1fe50cu: goto label_1fe50c;
        case 0x1fe510u: goto label_1fe510;
        case 0x1fe514u: goto label_1fe514;
        case 0x1fe518u: goto label_1fe518;
        case 0x1fe51cu: goto label_1fe51c;
        case 0x1fe520u: goto label_1fe520;
        case 0x1fe524u: goto label_1fe524;
        case 0x1fe528u: goto label_1fe528;
        case 0x1fe52cu: goto label_1fe52c;
        case 0x1fe530u: goto label_1fe530;
        case 0x1fe534u: goto label_1fe534;
        case 0x1fe538u: goto label_1fe538;
        case 0x1fe53cu: goto label_1fe53c;
        case 0x1fe540u: goto label_1fe540;
        case 0x1fe544u: goto label_1fe544;
        default: break;
    }

    ctx->pc = 0x1fe428u;

label_1fe428:
    // 0x1fe428: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fe428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1fe42c:
    // 0x1fe42c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1fe42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1fe430:
    // 0x1fe430: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1fe430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1fe434:
    // 0x1fe434: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fe434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fe438:
    // 0x1fe438: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fe438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe43c:
    // 0x1fe43c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1fe43cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fe440:
    // 0x1fe440: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fe440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe444:
    // 0x1fe444: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x1fe444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
label_1fe448:
    // 0x1fe448: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe44c:
    // 0x1fe44c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1fe44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1fe450:
    // 0x1fe450: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1fe450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1fe454:
    // 0x1fe454: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fe454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe458:
    // 0x1fe458: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1fe458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1fe45c:
    // 0x1fe45c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1fe45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1fe460:
    // 0x1fe460: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fe464:
    // 0x1fe464: 0xc07f1c0  jal         func_1FC700
label_1fe468:
    if (ctx->pc == 0x1FE468u) {
        ctx->pc = 0x1FE468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE464u;
        // 0x1fe468: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE46Cu;
        goto label_1fe46c;
    }
    ctx->pc = 0x1FE464u;
    SET_GPR_U32(ctx, 31, 0x1FE46Cu);
    ctx->pc = 0x1FE468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE464u;
    // 0x1fe468: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1FE464u, 0x1FE46Cu)) {
        return;
    }
    ctx->pc = 0x1FE46Cu;
label_1fe46c:
    // 0x1fe46c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fe46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe470:
    // 0x1fe470: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fe470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe474:
    // 0x1fe474: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1fe478:
    if (ctx->pc == 0x1FE478u) {
        ctx->pc = 0x1FE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE474u;
        // 0x1fe478: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE47Cu;
        goto label_1fe47c;
    }
    ctx->pc = 0x1FE474u;
    {
        const bool branch_taken_0x1fe474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE474u;
        // 0x1fe478: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe474) {
            ctx->pc = 0x1FE514u;
            goto label_1fe514;
        }
    }
    ctx->pc = 0x1FE47Cu;
label_1fe47c:
    // 0x1fe47c: 0x2455108c  addiu       $s5, $v0, 0x108C
    ctx->pc = 0x1fe47cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_1fe480:
    // 0x1fe480: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fe480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe484:
    // 0x1fe484: 0x0  nop
    ctx->pc = 0x1fe484u;
    // NOP
label_1fe488:
    // 0x1fe488: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1fe488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fe48c:
    // 0x1fe48c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1fe490:
    if (ctx->pc == 0x1FE490u) {
        ctx->pc = 0x1FE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE48Cu;
        // 0x1fe490: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE494u;
        goto label_1fe494;
    }
    ctx->pc = 0x1FE48Cu;
    {
        const bool branch_taken_0x1fe48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE48Cu;
        // 0x1fe490: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe48c) {
            ctx->pc = 0x1FE4E4u;
            goto label_1fe4e4;
        }
    }
    ctx->pc = 0x1FE494u;
label_1fe494:
    // 0x1fe494: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1fe494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1fe498:
    // 0x1fe498: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1fe498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1fe49c:
    // 0x1fe49c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1fe49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fe4a0:
    // 0x1fe4a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4a4:
    // 0x1fe4a4: 0xc08063c  jal         func_2018F0
label_1fe4a8:
    if (ctx->pc == 0x1FE4A8u) {
        ctx->pc = 0x1FE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4A4u;
        // 0x1fe4a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4ACu;
        goto label_1fe4ac;
    }
    ctx->pc = 0x1FE4A4u;
    SET_GPR_U32(ctx, 31, 0x1FE4ACu);
    ctx->pc = 0x1FE4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE4A4u;
    // 0x1fe4a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x1FE4A4u, 0x1FE4ACu)) {
        return;
    }
    ctx->pc = 0x1FE4ACu;
label_1fe4ac:
    // 0x1fe4ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4b0:
    // 0x1fe4b0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1fe4b4:
    if (ctx->pc == 0x1FE4B4u) {
        ctx->pc = 0x1FE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4B0u;
        // 0x1fe4b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4B8u;
        goto label_1fe4b8;
    }
    ctx->pc = 0x1FE4B0u;
    {
        const bool branch_taken_0x1fe4b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4B0u;
        // 0x1fe4b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4b0) {
            ctx->pc = 0x1FE4E0u;
            goto label_1fe4e0;
        }
    }
    ctx->pc = 0x1FE4B8u;
label_1fe4b8:
    // 0x1fe4b8: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x1fe4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_1fe4bc:
    // 0x1fe4bc: 0x40f809  jalr        $v0
label_1fe4c0:
    if (ctx->pc == 0x1FE4C0u) {
        ctx->pc = 0x1FE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4BCu;
        // 0x1fe4c0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4C4u;
        goto label_1fe4c4;
    }
    ctx->pc = 0x1FE4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE4C4u);
        ctx->pc = 0x1FE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4BCu;
        // 0x1fe4c0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE4BCu, 0x1FE4C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE4C4u;
label_1fe4c4:
    // 0x1fe4c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1fe4c8:
    if (ctx->pc == 0x1FE4C8u) {
        ctx->pc = 0x1FE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4C4u;
        // 0x1fe4c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4CCu;
        goto label_1fe4cc;
    }
    ctx->pc = 0x1FE4C4u;
    {
        const bool branch_taken_0x1fe4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4C4u;
        // 0x1fe4c8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4c4) {
            ctx->pc = 0x1FE4E4u;
            goto label_1fe4e4;
        }
    }
    ctx->pc = 0x1FE4CCu;
label_1fe4cc:
    // 0x1fe4cc: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x1fe4ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1fe4d0:
    // 0x1fe4d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1fe4d4:
    if (ctx->pc == 0x1FE4D4u) {
        ctx->pc = 0x1FE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4D0u;
        // 0x1fe4d4: 0x8e120018  lw          $s2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4D8u;
        goto label_1fe4d8;
    }
    ctx->pc = 0x1FE4D0u;
    {
        const bool branch_taken_0x1fe4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4d0) {
            ctx->pc = 0x1FE4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE4D0u;
            // 0x1fe4d4: 0x8e120018  lw          $s2, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE4E4u;
            goto label_1fe4e4;
        }
    }
    ctx->pc = 0x1FE4D8u;
label_1fe4d8:
    // 0x1fe4d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fe4dc:
    if (ctx->pc == 0x1FE4DCu) {
        ctx->pc = 0x1FE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4D8u;
        // 0x1fe4dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4E0u;
        goto label_1fe4e0;
    }
    ctx->pc = 0x1FE4D8u;
    {
        const bool branch_taken_0x1fe4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4D8u;
        // 0x1fe4dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4d8) {
            ctx->pc = 0x1FE4E4u;
            goto label_1fe4e4;
        }
    }
    ctx->pc = 0x1FE4E0u;
label_1fe4e0:
    // 0x1fe4e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fe4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe4e4:
    // 0x1fe4e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4e8:
    // 0x1fe4e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe4ec:
    // 0x1fe4ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fe4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fe4f0:
    // 0x1fe4f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fe4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fe4f4:
    // 0x1fe4f4: 0xc07f0c8  jal         func_1FC320
label_1fe4f8:
    if (ctx->pc == 0x1FE4F8u) {
        ctx->pc = 0x1FE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4F4u;
        // 0x1fe4f8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4FCu;
        goto label_1fe4fc;
    }
    ctx->pc = 0x1FE4F4u;
    SET_GPR_U32(ctx, 31, 0x1FE4FCu);
    ctx->pc = 0x1FE4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE4F4u;
    // 0x1fe4f8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1FE4F4u, 0x1FE4FCu)) {
        return;
    }
    ctx->pc = 0x1FE4FCu;
label_1fe4fc:
    // 0x1fe4fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fe4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe500:
    // 0x1fe500: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fe500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe504:
    // 0x1fe504: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1fe508:
    if (ctx->pc == 0x1FE508u) {
        ctx->pc = 0x1FE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE504u;
        // 0x1fe508: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE50Cu;
        goto label_1fe50c;
    }
    ctx->pc = 0x1FE504u;
    {
        const bool branch_taken_0x1fe504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE504u;
        // 0x1fe508: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe504) {
            ctx->pc = 0x1FE518u;
            goto label_1fe518;
        }
    }
    ctx->pc = 0x1FE50Cu;
label_1fe50c:
    // 0x1fe50c: 0x1240ffde  beqz        $s2, . + 4 + (-0x22 << 2)
label_1fe510:
    if (ctx->pc == 0x1FE510u) {
        ctx->pc = 0x1FE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE50Cu;
        // 0x1fe510: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE514u;
        goto label_1fe514;
    }
    ctx->pc = 0x1FE50Cu;
    {
        const bool branch_taken_0x1fe50c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE50Cu;
        // 0x1fe510: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe50c) {
            ctx->pc = 0x1FE488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe488;
        }
    }
    ctx->pc = 0x1FE514u;
label_1fe514:
    // 0x1fe514: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1fe514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe518:
    // 0x1fe518: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1fe518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1fe51c:
    // 0x1fe51c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1fe51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fe520:
    // 0x1fe520: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1fe520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fe524:
    // 0x1fe524: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1fe524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fe528:
    // 0x1fe528: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fe528u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fe52c:
    // 0x1fe52c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1fe52cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fe530:
    // 0x1fe530: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe534:
    // 0x1fe534: 0x3e00008  jr          $ra
label_1fe538:
    if (ctx->pc == 0x1FE538u) {
        ctx->pc = 0x1FE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE534u;
        // 0x1fe538: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE53Cu;
        goto label_1fe53c;
    }
    ctx->pc = 0x1FE534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE534u;
        // 0x1fe538: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE53Cu;
label_1fe53c:
    // 0x1fe53c: 0x0  nop
    ctx->pc = 0x1fe53cu;
    // NOP
label_1fe540:
    // 0x1fe540: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1fe540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fe544:
    // 0x1fe544: 0x0  nop
    ctx->pc = 0x1fe544u;
    // NOP
    ctx->pc = 0x1fe548u;
}
