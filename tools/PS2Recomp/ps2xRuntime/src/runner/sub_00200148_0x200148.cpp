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

// Function: sub_00200148
// Address: 0x200148 - 0x2001e8
void sub_00200148_0x200148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200148_0x200148");
#endif

    switch (ctx->pc) {
        case 0x20017cu: goto label_20017c;
        case 0x200190u: goto label_200190;
        case 0x2001a4u: goto label_2001a4;
        case 0x2001d0u: goto label_2001d0;
        default: break;
    }

    ctx->pc = 0x200148u;

    // 0x200148: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x200148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20014c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x20014cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x200150: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x200150u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x200154: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x200154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x200158: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x200158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x20015c: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x20015cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x200160: 0x8e222cb8  lw          $v0, 0x2CB8($s1)
    ctx->pc = 0x200160u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702CB8u));
    // 0x200164: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x200164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200168: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x200168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20016c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20016Cu;
    {
        const bool branch_taken_0x20016c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20016Cu;
        // 0x200170: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20016c) {
            ctx->pc = 0x200190u;
            goto label_200190;
        }
    }
    ctx->pc = 0x200174u;
    // 0x200174: 0xc08002c  jal         func_2000B0
    ctx->pc = 0x200174u;
    SET_GPR_U32(ctx, 31, 0x20017Cu);
    ctx->pc = 0x200178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200174u;
    // 0x200178: 0x26042c98  addiu       $a0, $s0, 0x2C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2000B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2000B0u, 0x200174u, 0x20017Cu)) {
        return;
    }
    ctx->pc = 0x20017Cu;
label_20017c:
    // 0x20017c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20017cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200180: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x200180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x200184: 0xae222cb8  sw          $v0, 0x2CB8($s1)
    ctx->pc = 0x200184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11448), GPR_U32(ctx, 2));
    // 0x200188: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x200188u;
    SET_GPR_U32(ctx, 31, 0x200190u);
    ctx->pc = 0x20018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200188u;
    // 0x20018c: 0x2484f908  addiu       $a0, $a0, -0x6F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x200188u, 0x200190u)) {
        return;
    }
    ctx->pc = 0x200190u;
label_200190:
    // 0x200190: 0x26112c98  addiu       $s1, $s0, 0x2C98
    ctx->pc = 0x200190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 11416));
    // 0x200194: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x200194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200198: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20019c: 0xc07fed4  jal         func_1FFB50
    ctx->pc = 0x20019Cu;
    SET_GPR_U32(ctx, 31, 0x2001A4u);
    ctx->pc = 0x2001A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20019Cu;
    // 0x2001a0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FFB50u, 0x20019Cu, 0x2001A4u)) {
        return;
    }
    ctx->pc = 0x2001A4u;
label_2001a4:
    // 0x2001a4: 0x8e022c98  lw          $v0, 0x2C98($s0)
    ctx->pc = 0x2001a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11416)));
    // 0x2001a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2001a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2001ac: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2001ACu;
    {
        const bool branch_taken_0x2001ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2001B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001ACu;
        // 0x2001b0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001ac) {
            ctx->pc = 0x2001D0u;
            goto label_2001d0;
        }
    }
    ctx->pc = 0x2001B4u;
    // 0x2001b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2001b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2001b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2001b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001bc: 0xafb20034  sw          $s2, 0x34($sp)
    ctx->pc = 0x2001bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 18));
    // 0x2001c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2001c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2001c4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2001c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2001c8: 0xc07ffd2  jal         func_1FFF48
    ctx->pc = 0x2001C8u;
    SET_GPR_U32(ctx, 31, 0x2001D0u);
    ctx->pc = 0x2001CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001C8u;
    // 0x2001cc: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FFF48u, 0x2001C8u, 0x2001D0u)) {
        return;
    }
    ctx->pc = 0x2001D0u;
label_2001d0:
    // 0x2001d0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2001d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2001d4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2001d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2001d8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2001d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2001dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2001dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2001e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2001E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2001E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001E0u;
        // 0x2001e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2001E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2001E8u;
}
