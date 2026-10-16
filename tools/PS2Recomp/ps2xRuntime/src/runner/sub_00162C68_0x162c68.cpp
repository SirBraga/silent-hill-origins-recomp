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

// Function: sub_00162C68
// Address: 0x162c68 - 0x162ce8
void sub_00162C68_0x162c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162C68_0x162c68");
#endif

    switch (ctx->pc) {
        case 0x162c84u: goto label_162c84;
        case 0x162ca8u: goto label_162ca8;
        default: break;
    }

    ctx->pc = 0x162c68u;

    // 0x162c68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162c6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x162c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x162c70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162c74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162c7c: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x162C7Cu;
    SET_GPR_U32(ctx, 31, 0x162C84u);
    ctx->pc = 0x162C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162C7Cu;
    // 0x162c80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x162C7Cu, 0x162C84u)) {
        return;
    }
    ctx->pc = 0x162C84u;
label_162c84:
    // 0x162c84: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x162c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x162c88: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x162c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x162c8c: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x162c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x162c90: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x162C90u;
    {
        const bool branch_taken_0x162c90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x162c90) {
            ctx->pc = 0x162C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162C90u;
            // 0x162c94: 0x8e031d2c  lw          $v1, 0x1D2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162CACu;
            goto label_162cac;
        }
    }
    ctx->pc = 0x162C98u;
    // 0x162c98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x162c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x162c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ca0: 0xc058a4a  jal         func_162928
    ctx->pc = 0x162CA0u;
    SET_GPR_U32(ctx, 31, 0x162CA8u);
    ctx->pc = 0x162CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CA0u;
    // 0x162ca4: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x162928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x162928u, 0x162CA0u, 0x162CA8u)) {
        return;
    }
    ctx->pc = 0x162CA8u;
label_162ca8:
    // 0x162ca8: 0x8e031d2c  lw          $v1, 0x1D2C($s0)
    ctx->pc = 0x162ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7468)));
label_162cac:
    // 0x162cac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x162cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x162cb0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x162CB0u;
    {
        const bool branch_taken_0x162cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x162cb0) {
            ctx->pc = 0x162CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162CB0u;
            // 0x162cb4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162CC4u;
            goto label_162cc4;
        }
    }
    ctx->pc = 0x162CB8u;
    // 0x162cb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162cbc: 0xae021d28  sw          $v0, 0x1D28($s0)
    ctx->pc = 0x162cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7464), GPR_U32(ctx, 2));
    // 0x162cc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x162cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_162cc4:
    // 0x162cc4: 0x8e021d34  lw          $v0, 0x1D34($s0)
    ctx->pc = 0x162cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7476)));
    // 0x162cc8: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x162CC8u;
    {
        const bool branch_taken_0x162cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162cc8) {
            ctx->pc = 0x162CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162CC8u;
            // 0x162ccc: 0xae001d28  sw          $zero, 0x1D28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 7464), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162CD0u;
            goto label_162cd0;
        }
    }
    ctx->pc = 0x162CD0u;
label_162cd0:
    // 0x162cd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x162cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x162CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CDCu;
        // 0x162ce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162CE4u;
    // 0x162ce4: 0x0  nop
    ctx->pc = 0x162ce4u;
    // NOP
    ctx->pc = 0x162ce8u;
}
