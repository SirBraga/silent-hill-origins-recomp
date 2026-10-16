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

// Function: sub_00147258
// Address: 0x147258 - 0x1472b8
void sub_00147258_0x147258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147258_0x147258");
#endif

    switch (ctx->pc) {
        case 0x14728cu: goto label_14728c;
        case 0x1472a4u: goto label_1472a4;
        default: break;
    }

    ctx->pc = 0x147258u;

    // 0x147258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x147258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14725c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x147260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14726c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x14726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x147270: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x147270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x147274: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x147274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x147278: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147278u;
    {
        const bool branch_taken_0x147278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147278u;
        // 0x14727c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147278) {
            ctx->pc = 0x14728Cu;
            goto label_14728c;
        }
    }
    ctx->pc = 0x147280u;
    // 0x147280: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x147284: 0xc0aa77a  jal         func_2A9DE8
    ctx->pc = 0x147284u;
    SET_GPR_U32(ctx, 31, 0x14728Cu);
    ctx->pc = 0x147288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147284u;
    // 0x147288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9DE8u, 0x147284u, 0x14728Cu)) {
        return;
    }
    ctx->pc = 0x14728Cu;
label_14728c:
    // 0x14728c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x14728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x147290: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x147290u;
    {
        const bool branch_taken_0x147290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147290) {
            ctx->pc = 0x147294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147290u;
            // 0x147294: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1472A8u;
            goto label_1472a8;
        }
    }
    ctx->pc = 0x147298u;
    // 0x147298: 0xc60c004c  lwc1        $f12, 0x4C($s0)
    ctx->pc = 0x147298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14729c: 0xc0aa756  jal         func_2A9D58
    ctx->pc = 0x14729Cu;
    SET_GPR_U32(ctx, 31, 0x1472A4u);
    ctx->pc = 0x1472A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14729Cu;
    // 0x1472a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9D58u, 0x14729Cu, 0x1472A4u)) {
        return;
    }
    ctx->pc = 0x1472A4u;
label_1472a4:
    // 0x1472a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1472a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1472a8:
    // 0x1472a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1472a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1472ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1472acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1472b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1472B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1472B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472B0u;
        // 0x1472b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1472B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1472B8u;
}
