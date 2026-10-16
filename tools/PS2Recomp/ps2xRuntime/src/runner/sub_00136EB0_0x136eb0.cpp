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

// Function: sub_00136EB0
// Address: 0x136eb0 - 0x136ee8
void sub_00136EB0_0x136eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136EB0_0x136eb0");
#endif

    switch (ctx->pc) {
        case 0x136ec8u: goto label_136ec8;
        case 0x136ed4u: goto label_136ed4;
        default: break;
    }

    ctx->pc = 0x136eb0u;

    // 0x136eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136eb4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x136eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x136eb8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x136eb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x136ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136ec0: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x136EC0u;
    SET_GPR_U32(ctx, 31, 0x136EC8u);
    ctx->pc = 0x136EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EC0u;
    // 0x136ec4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x136EC0u, 0x136EC8u)) {
        return;
    }
    ctx->pc = 0x136EC8u;
label_136ec8:
    // 0x136ec8: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x136ec8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x136ecc: 0xc05f910  jal         func_17E440
    ctx->pc = 0x136ECCu;
    SET_GPR_U32(ctx, 31, 0x136ED4u);
    ctx->pc = 0x136ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136ECCu;
    // 0x136ed0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x136ECCu, 0x136ED4u)) {
        return;
    }
    ctx->pc = 0x136ED4u;
label_136ed4:
    // 0x136ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136ed8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x136ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x136edc: 0x3e00008  jr          $ra
    ctx->pc = 0x136EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EDCu;
        // 0x136ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136EE4u;
    // 0x136ee4: 0x0  nop
    ctx->pc = 0x136ee4u;
    // NOP
    ctx->pc = 0x136ee8u;
}
