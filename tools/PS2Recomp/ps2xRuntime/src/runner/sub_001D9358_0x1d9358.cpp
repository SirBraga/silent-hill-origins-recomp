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

// Function: sub_001D9358
// Address: 0x1d9358 - 0x1d93d8
void sub_001D9358_0x1d9358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9358_0x1d9358");
#endif

    switch (ctx->pc) {
        case 0x1d9370u: goto label_1d9370;
        case 0x1d9384u: goto label_1d9384;
        case 0x1d938cu: goto label_1d938c;
        case 0x1d9394u: goto label_1d9394;
        case 0x1d93a4u: goto label_1d93a4;
        default: break;
    }

    ctx->pc = 0x1d9358u;

    // 0x1d9358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d935c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x1d935cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x1d9360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d9364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9368: 0xc0b711c  jal         func_2DC470
    ctx->pc = 0x1D9368u;
    SET_GPR_U32(ctx, 31, 0x1D9370u);
    ctx->pc = 0x1D936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9368u;
    // 0x1d936c: 0x248410d0  addiu       $a0, $a0, 0x10D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC470u, 0x1D9368u, 0x1D9370u)) {
        return;
    }
    ctx->pc = 0x1D9370u;
label_1d9370:
    // 0x1d9370: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1d9370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1d9374: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D9374u;
    {
        const bool branch_taken_0x1d9374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9374u;
        // 0x1d9378: 0xac623c2c  sw          $v0, 0x3C2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 15404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9374) {
            ctx->pc = 0x1D93B8u;
            goto label_1d93b8;
        }
    }
    ctx->pc = 0x1D937Cu;
    // 0x1d937c: 0xc042b7e  jal         func_10ADF8
    ctx->pc = 0x1D937Cu;
    SET_GPR_U32(ctx, 31, 0x1D9384u);
    ctx->pc = 0x10ADF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10ADF8u, 0x1D937Cu, 0x1D9384u)) {
        return;
    }
    ctx->pc = 0x1D9384u;
label_1d9384:
    // 0x1d9384: 0xc0b7192  jal         func_2DC648
    ctx->pc = 0x1D9384u;
    SET_GPR_U32(ctx, 31, 0x1D938Cu);
    ctx->pc = 0x2DC648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC648u, 0x1D9384u, 0x1D938Cu)) {
        return;
    }
    ctx->pc = 0x1D938Cu;
label_1d938c:
    // 0x1d938c: 0xc0b86d4  jal         func_2E1B50
    ctx->pc = 0x1D938Cu;
    SET_GPR_U32(ctx, 31, 0x1D9394u);
    ctx->pc = 0x2E1B50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1B50u, 0x1D938Cu, 0x1D9394u)) {
        return;
    }
    ctx->pc = 0x1D9394u;
label_1d9394:
    // 0x1d9394: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9394u;
    {
        const bool branch_taken_0x1d9394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9394u;
        // 0x1d9398: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9394) {
            ctx->pc = 0x1D93A8u;
            goto label_1d93a8;
        }
    }
    ctx->pc = 0x1D939Cu;
    // 0x1d939c: 0xc0ba8fe  jal         func_2EA3F8
    ctx->pc = 0x1D939Cu;
    SET_GPR_U32(ctx, 31, 0x1D93A4u);
    ctx->pc = 0x2EA3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EA3F8u, 0x1D939Cu, 0x1D93A4u)) {
        return;
    }
    ctx->pc = 0x1D93A4u;
label_1d93a4:
    // 0x1d93a4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d93a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d93a8:
    // 0x1d93a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d93ac: 0xac629e08  sw          $v0, -0x61F8($v1)
    ctx->pc = 0x1d93acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942216), GPR_U32(ctx, 2));
    // 0x1d93b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D93B0u;
    {
        const bool branch_taken_0x1d93b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D93B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93B0u;
        // 0x1d93b4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93b0) {
            ctx->pc = 0x1D93C0u;
            goto label_1d93c0;
        }
    }
    ctx->pc = 0x1D93B8u;
label_1d93b8:
    // 0x1d93b8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d93bc: 0xac409e08  sw          $zero, -0x61F8($v0)
    ctx->pc = 0x1d93bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x339E08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339E08u, _value); } while (0);
label_1d93c0:
    // 0x1d93c0: 0x8c429e08  lw          $v0, -0x61F8($v0)
    ctx->pc = 0x1d93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942216)));
    // 0x1d93c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d93c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D93C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93C8u;
        // 0x1d93cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D93C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D93D0u;
    // 0x1d93d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d93d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d93d4: 0x0  nop
    ctx->pc = 0x1d93d4u;
    // NOP
    ctx->pc = 0x1d93d8u;
}
