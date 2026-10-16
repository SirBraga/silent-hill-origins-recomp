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

// Function: sub_001BC300
// Address: 0x1bc300 - 0x1bc3d0
void sub_001BC300_0x1bc300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC300_0x1bc300");
#endif

    switch (ctx->pc) {
        case 0x1bc334u: goto label_1bc334;
        case 0x1bc348u: goto label_1bc348;
        case 0x1bc378u: goto label_1bc378;
        case 0x1bc388u: goto label_1bc388;
        case 0x1bc3bcu: goto label_1bc3bc;
        default: break;
    }

    ctx->pc = 0x1bc300u;

    // 0x1bc300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bc300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bc304: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bc304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bc308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc30c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc310: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1bc310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1bc314: 0x8e030320  lw          $v1, 0x320($s0)
    ctx->pc = 0x1bc314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1bc318: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bc318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bc31c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1bc31cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bc320: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BC320u;
    {
        const bool branch_taken_0x1bc320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC320u;
        // 0x1bc324: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc320) {
            ctx->pc = 0x1BC390u;
            goto label_1bc390;
        }
    }
    ctx->pc = 0x1BC328u;
    // 0x1bc328: 0x8e04035c  lw          $a0, 0x35C($s0)
    ctx->pc = 0x1bc328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1bc32c: 0xc06fa5e  jal         func_1BE978
    ctx->pc = 0x1BC32Cu;
    SET_GPR_U32(ctx, 31, 0x1BC334u);
    ctx->pc = 0x1BC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC32Cu;
    // 0x1bc330: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE978u, 0x1BC32Cu, 0x1BC334u)) {
        return;
    }
    ctx->pc = 0x1BC334u;
label_1bc334:
    // 0x1bc334: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1bc334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1bc338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc33c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1bc33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bc340: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BC340u;
    SET_GPR_U32(ctx, 31, 0x1BC348u);
    ctx->pc = 0x1BC344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC340u;
    // 0x1bc344: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BC340u, 0x1BC348u)) {
        return;
    }
    ctx->pc = 0x1BC348u;
label_1bc348:
    // 0x1bc348: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1bc348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1bc34c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bc34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bc350: 0x8c6343e8  lw          $v1, 0x43E8($v1)
    ctx->pc = 0x1bc350u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B43E8u));
    // 0x1bc354: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1bc354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bc358: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC358u;
    {
        const bool branch_taken_0x1bc358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC358u;
        // 0x1bc35c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc358) {
            ctx->pc = 0x1BC37Cu;
            goto label_1bc37c;
        }
    }
    ctx->pc = 0x1BC360u;
    // 0x1bc360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bc360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc364: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC364u;
    {
        const bool branch_taken_0x1bc364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC364u;
        // 0x1bc368: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc364) {
            ctx->pc = 0x1BC378u;
            goto label_1bc378;
        }
    }
    ctx->pc = 0x1BC36Cu;
    // 0x1bc36c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bc36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bc370: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BC370u;
    SET_GPR_U32(ctx, 31, 0x1BC378u);
    ctx->pc = 0x1BC374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC370u;
    // 0x1bc374: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BC370u, 0x1BC378u)) {
        return;
    }
    ctx->pc = 0x1BC378u;
label_1bc378:
    // 0x1bc378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc37c:
    // 0x1bc37c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc380: 0xc06ee2c  jal         func_1BB8B0
    ctx->pc = 0x1BC380u;
    SET_GPR_U32(ctx, 31, 0x1BC388u);
    ctx->pc = 0x1BC384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC380u;
    // 0x1bc384: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BB8B0u, 0x1BC380u, 0x1BC388u)) {
        return;
    }
    ctx->pc = 0x1BC388u;
label_1bc388:
    // 0x1bc388: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BC388u;
    {
        const bool branch_taken_0x1bc388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC388u;
        // 0x1bc38c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc388) {
            ctx->pc = 0x1BC3C0u;
            goto label_1bc3c0;
        }
    }
    ctx->pc = 0x1BC390u;
label_1bc390:
    // 0x1bc390: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bc390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bc394: 0x8c4543f0  lw          $a1, 0x43F0($v0)
    ctx->pc = 0x1bc394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17392)));
    // 0x1bc398: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bc398u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bc39c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC39Cu;
    {
        const bool branch_taken_0x1bc39c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC39Cu;
        // 0x1bc3a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc39c) {
            ctx->pc = 0x1BC3C0u;
            goto label_1bc3c0;
        }
    }
    ctx->pc = 0x1BC3A4u;
    // 0x1bc3a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc3a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC3A8u;
    {
        const bool branch_taken_0x1bc3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3A8u;
        // 0x1bc3ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3a8) {
            ctx->pc = 0x1BC3C0u;
            goto label_1bc3c0;
        }
    }
    ctx->pc = 0x1BC3B0u;
    // 0x1bc3b0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bc3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bc3b4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BC3B4u;
    SET_GPR_U32(ctx, 31, 0x1BC3BCu);
    ctx->pc = 0x1BC3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC3B4u;
    // 0x1bc3b8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BC3B4u, 0x1BC3BCu)) {
        return;
    }
    ctx->pc = 0x1BC3BCu;
label_1bc3bc:
    // 0x1bc3bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bc3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bc3c0:
    // 0x1bc3c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3C4u;
        // 0x1bc3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC3CCu;
    // 0x1bc3cc: 0x0  nop
    ctx->pc = 0x1bc3ccu;
    // NOP
    ctx->pc = 0x1bc3d0u;
}
