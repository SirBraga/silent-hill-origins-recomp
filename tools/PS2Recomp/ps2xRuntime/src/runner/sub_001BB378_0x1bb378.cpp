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

// Function: sub_001BB378
// Address: 0x1bb378 - 0x1bb4d8
void sub_001BB378_0x1bb378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB378_0x1bb378");
#endif

    switch (ctx->pc) {
        case 0x1bb3ccu: goto label_1bb3cc;
        case 0x1bb3e4u: goto label_1bb3e4;
        case 0x1bb410u: goto label_1bb410;
        case 0x1bb420u: goto label_1bb420;
        case 0x1bb430u: goto label_1bb430;
        case 0x1bb444u: goto label_1bb444;
        case 0x1bb458u: goto label_1bb458;
        case 0x1bb478u: goto label_1bb478;
        case 0x1bb488u: goto label_1bb488;
        case 0x1bb498u: goto label_1bb498;
        case 0x1bb4a8u: goto label_1bb4a8;
        case 0x1bb4c0u: goto label_1bb4c0;
        default: break;
    }

    ctx->pc = 0x1bb378u;

    // 0x1bb378: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bb378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bb37c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bb37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bb380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb384: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bb384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb388: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1bb388u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1bb38c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bb38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb394: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x1bb394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x1bb398: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bb398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb39c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1BB39Cu;
    {
        const bool branch_taken_0x1bb39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB39Cu;
        // 0x1bb3a0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb39c) {
            ctx->pc = 0x1BB460u;
            goto label_1bb460;
        }
    }
    ctx->pc = 0x1BB3A4u;
    // 0x1bb3a4: 0x8e22035c  lw          $v0, 0x35C($s1)
    ctx->pc = 0x1bb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
    // 0x1bb3a8: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x1bb3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1bb3ac: 0x5460002d  bnel        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BB3ACu;
    {
        const bool branch_taken_0x1bb3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb3ac) {
            ctx->pc = 0x1BB3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB3ACu;
            // 0x1bb3b0: 0x8e220360  lw          $v0, 0x360($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB464u;
            goto label_1bb464;
        }
    }
    ctx->pc = 0x1BB3B4u;
    // 0x1bb3b4: 0x2602fffc  addiu       $v0, $s0, -0x4
    ctx->pc = 0x1bb3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1bb3b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bb3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bb3bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB3BCu;
    {
        const bool branch_taken_0x1bb3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3BCu;
        // 0x1bb3c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3bc) {
            ctx->pc = 0x1BB3D8u;
            goto label_1bb3d8;
        }
    }
    ctx->pc = 0x1BB3C4u;
    // 0x1bb3c4: 0xc06ce26  jal         func_1B3898
    ctx->pc = 0x1BB3C4u;
    SET_GPR_U32(ctx, 31, 0x1BB3CCu);
    ctx->pc = 0x1B3898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3898u, 0x1BB3C4u, 0x1BB3CCu)) {
        return;
    }
    ctx->pc = 0x1BB3CCu;
label_1bb3cc:
    // 0x1bb3cc: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB3CCu;
    {
        const bool branch_taken_0x1bb3cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3CCu;
        // 0x1bb3d0: 0x2e02000c  sltiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3cc) {
            ctx->pc = 0x1BB3E8u;
            goto label_1bb3e8;
        }
    }
    ctx->pc = 0x1BB3D4u;
    // 0x1bb3d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bb3d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1bb3d8:
    // 0x1bb3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb3dc: 0xc06ba6c  jal         func_1AE9B0
    ctx->pc = 0x1BB3DCu;
    SET_GPR_U32(ctx, 31, 0x1BB3E4u);
    ctx->pc = 0x1BB3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3DCu;
    // 0x1bb3e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1BB3DCu, 0x1BB3E4u)) {
        return;
    }
    ctx->pc = 0x1BB3E4u;
label_1bb3e4:
    // 0x1bb3e4: 0x2e02000c  sltiu       $v0, $s0, 0xC
    ctx->pc = 0x1bb3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_1bb3e8:
    // 0x1bb3e8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1BB3E8u;
    {
        const bool branch_taken_0x1bb3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3E8u;
        // 0x1bb3ec: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3e8) {
            ctx->pc = 0x1BB4D8u;
            return;
        }
    }
    ctx->pc = 0x1BB3F0u;
    // 0x1bb3f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bb3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bb3f4: 0x2442d570  addiu       $v0, $v0, -0x2A90
    ctx->pc = 0x1bb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956400));
    // 0x1bb3f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bb3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bb3fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bb3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb400: 0x800008  jr          $a0
    ctx->pc = 0x1BB400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB408u: goto label_1bb408;
            case 0x1BB418u: goto label_1bb418;
            case 0x1BB428u: goto label_1bb428;
            case 0x1BB438u: goto label_1bb438;
            case 0x1BB44Cu: goto label_1bb44c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB400u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BB408u;
label_1bb408:
    // 0x1bb408: 0xc06f8f0  jal         func_1BE3C0
    ctx->pc = 0x1BB408u;
    SET_GPR_U32(ctx, 31, 0x1BB410u);
    ctx->pc = 0x1BB40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB408u;
    // 0x1bb40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE3C0u, 0x1BB408u, 0x1BB410u)) {
        return;
    }
    ctx->pc = 0x1BB410u;
label_1bb410:
    // 0x1bb410: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1BB410u;
    {
        const bool branch_taken_0x1bb410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB410u;
        // 0x1bb414: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb410) {
            ctx->pc = 0x1BB4DCu;
            return;
        }
    }
    ctx->pc = 0x1BB418u;
label_1bb418:
    // 0x1bb418: 0xc06f0f4  jal         func_1BC3D0
    ctx->pc = 0x1BB418u;
    SET_GPR_U32(ctx, 31, 0x1BB420u);
    ctx->pc = 0x1BB41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB418u;
    // 0x1bb41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BC3D0u, 0x1BB418u, 0x1BB420u)) {
        return;
    }
    ctx->pc = 0x1BB420u;
label_1bb420:
    // 0x1bb420: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1BB420u;
    {
        const bool branch_taken_0x1bb420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB420u;
        // 0x1bb424: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb420) {
            ctx->pc = 0x1BB4DCu;
            return;
        }
    }
    ctx->pc = 0x1BB428u;
label_1bb428:
    // 0x1bb428: 0xc06f0c0  jal         func_1BC300
    ctx->pc = 0x1BB428u;
    SET_GPR_U32(ctx, 31, 0x1BB430u);
    ctx->pc = 0x1BB42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB428u;
    // 0x1bb42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BC300u, 0x1BB428u, 0x1BB430u)) {
        return;
    }
    ctx->pc = 0x1BB430u;
label_1bb430:
    // 0x1bb430: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1BB430u;
    {
        const bool branch_taken_0x1bb430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB430u;
        // 0x1bb434: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb430) {
            ctx->pc = 0x1BB4DCu;
            return;
        }
    }
    ctx->pc = 0x1BB438u;
label_1bb438:
    // 0x1bb438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb43c: 0xc06f7dc  jal         func_1BDF70
    ctx->pc = 0x1BB43Cu;
    SET_GPR_U32(ctx, 31, 0x1BB444u);
    ctx->pc = 0x1BB440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB43Cu;
    // 0x1bb440: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDF70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BDF70u, 0x1BB43Cu, 0x1BB444u)) {
        return;
    }
    ctx->pc = 0x1BB444u;
label_1bb444:
    // 0x1bb444: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1BB444u;
    {
        const bool branch_taken_0x1bb444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB444u;
        // 0x1bb448: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb444) {
            ctx->pc = 0x1BB4DCu;
            return;
        }
    }
    ctx->pc = 0x1BB44Cu;
label_1bb44c:
    // 0x1bb44c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bb44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb450: 0xc06f7dc  jal         func_1BDF70
    ctx->pc = 0x1BB450u;
    SET_GPR_U32(ctx, 31, 0x1BB458u);
    ctx->pc = 0x1BB454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB450u;
    // 0x1bb454: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDF70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BDF70u, 0x1BB450u, 0x1BB458u)) {
        return;
    }
    ctx->pc = 0x1BB458u;
label_1bb458:
    // 0x1bb458: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1BB458u;
    {
        const bool branch_taken_0x1bb458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB458u;
        // 0x1bb45c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb458) {
            ctx->pc = 0x1BB4DCu;
            return;
        }
    }
    ctx->pc = 0x1BB460u;
label_1bb460:
    // 0x1bb460: 0x8e220360  lw          $v0, 0x360($s1)
    ctx->pc = 0x1bb460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
label_1bb464:
    // 0x1bb464: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bb464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb468: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BB468u;
    {
        const bool branch_taken_0x1bb468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb468) {
            ctx->pc = 0x1BB46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB468u;
            // 0x1bb46c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB4DCu;
            return;
        }
    }
    ctx->pc = 0x1BB470u;
    // 0x1bb470: 0xc06ce22  jal         func_1B3888
    ctx->pc = 0x1BB470u;
    SET_GPR_U32(ctx, 31, 0x1BB478u);
    ctx->pc = 0x1B3888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3888u, 0x1BB470u, 0x1BB478u)) {
        return;
    }
    ctx->pc = 0x1BB478u;
label_1bb478:
    // 0x1bb478: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB478u;
    {
        const bool branch_taken_0x1bb478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb478) {
            ctx->pc = 0x1BB490u;
            goto label_1bb490;
        }
    }
    ctx->pc = 0x1BB480u;
    // 0x1bb480: 0xc06f9b0  jal         func_1BE6C0
    ctx->pc = 0x1BB480u;
    SET_GPR_U32(ctx, 31, 0x1BB488u);
    ctx->pc = 0x1BB484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB480u;
    // 0x1bb484: 0x8e240360  lw          $a0, 0x360($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE6C0u, 0x1BB480u, 0x1BB488u)) {
        return;
    }
    ctx->pc = 0x1BB488u;
label_1bb488:
    // 0x1bb488: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1BB488u;
    {
        const bool branch_taken_0x1bb488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB488u;
        // 0x1bb48c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb488) {
            ctx->pc = 0x1BB4DCu;
            return;
        }
    }
    ctx->pc = 0x1BB490u;
label_1bb490:
    // 0x1bb490: 0xc06ce26  jal         func_1B3898
    ctx->pc = 0x1BB490u;
    SET_GPR_U32(ctx, 31, 0x1BB498u);
    ctx->pc = 0x1B3898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3898u, 0x1BB490u, 0x1BB498u)) {
        return;
    }
    ctx->pc = 0x1BB498u;
label_1bb498:
    // 0x1bb498: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB498u;
    {
        const bool branch_taken_0x1bb498 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB498u;
        // 0x1bb49c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb498) {
            ctx->pc = 0x1BB4B0u;
            goto label_1bb4b0;
        }
    }
    ctx->pc = 0x1BB4A0u;
    // 0x1bb4a0: 0xc06f9ea  jal         func_1BE7A8
    ctx->pc = 0x1BB4A0u;
    SET_GPR_U32(ctx, 31, 0x1BB4A8u);
    ctx->pc = 0x1BB4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4A0u;
    // 0x1bb4a4: 0x8e240360  lw          $a0, 0x360($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE7A8u, 0x1BB4A0u, 0x1BB4A8u)) {
        return;
    }
    ctx->pc = 0x1BB4A8u;
label_1bb4a8:
    // 0x1bb4a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BB4A8u;
    {
        const bool branch_taken_0x1bb4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4A8u;
        // 0x1bb4ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4a8) {
            ctx->pc = 0x1BB4DCu;
            return;
        }
    }
    ctx->pc = 0x1BB4B0u;
label_1bb4b0:
    // 0x1bb4b0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB4B0u;
    {
        const bool branch_taken_0x1bb4b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4B0u;
        // 0x1bb4b4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4b0) {
            ctx->pc = 0x1BB4C8u;
            goto label_1bb4c8;
        }
    }
    ctx->pc = 0x1BB4B8u;
    // 0x1bb4b8: 0xc06f28a  jal         func_1BCA28
    ctx->pc = 0x1BB4B8u;
    SET_GPR_U32(ctx, 31, 0x1BB4C0u);
    ctx->pc = 0x1BB4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4B8u;
    // 0x1bb4bc: 0x8e240360  lw          $a0, 0x360($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCA28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BCA28u, 0x1BB4B8u, 0x1BB4C0u)) {
        return;
    }
    ctx->pc = 0x1BB4C0u;
label_1bb4c0:
    // 0x1bb4c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB4C0u;
    {
        const bool branch_taken_0x1bb4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4C0u;
        // 0x1bb4c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4c0) {
            ctx->pc = 0x1BB4DCu;
            return;
        }
    }
    ctx->pc = 0x1BB4C8u;
label_1bb4c8:
    // 0x1bb4c8: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB4C8u;
    {
        const bool branch_taken_0x1bb4c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4C8u;
        // 0x1bb4cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4c8) {
            ctx->pc = 0x1BB4DCu;
            return;
        }
    }
    ctx->pc = 0x1BB4D0u;
    // 0x1bb4d0: 0xc06f2ae  jal         func_1BCAB8
    ctx->pc = 0x1BB4D0u;
    SET_GPR_U32(ctx, 31, 0x1BB4D8u);
    ctx->pc = 0x1BB4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4D0u;
    // 0x1bb4d4: 0x8e240360  lw          $a0, 0x360($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCAB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BCAB8u, 0x1BB4D0u, 0x1BB4D8u)) {
        return;
    }
    ctx->pc = 0x1BB4D8u;
}
