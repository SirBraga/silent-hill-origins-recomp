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

// Function: sub_002EA1F8
// Address: 0x2ea1f8 - 0x2ea250
void sub_002EA1F8_0x2ea1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA1F8_0x2ea1f8");
#endif

    switch (ctx->pc) {
        case 0x2ea228u: goto label_2ea228;
        case 0x2ea238u: goto label_2ea238;
        default: break;
    }

    ctx->pc = 0x2ea1f8u;

    // 0x2ea1f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ea1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ea1fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ea1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ea200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ea200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea208: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2ea208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ea20c: 0x8e020f40  lw          $v0, 0xF40($s0)
    ctx->pc = 0x2ea20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3904)));
    // 0x2ea210: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EA210u;
    {
        const bool branch_taken_0x2ea210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA210u;
        // 0x2ea214: 0xc4c00000  lwc1        $f0, 0x0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea210) {
            ctx->pc = 0x2EA238u;
            goto label_2ea238;
        }
    }
    ctx->pc = 0x2EA218u;
    // 0x2ea218: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x2ea218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x2ea21c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ea21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea220: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x2EA220u;
    SET_GPR_U32(ctx, 31, 0x2EA228u);
    ctx->pc = 0x2EA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA220u;
    // 0x2ea224: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x2EA220u, 0x2EA228u)) {
        return;
    }
    ctx->pc = 0x2EA228u;
label_2ea228:
    // 0x2ea228: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ea228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea22c: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x2ea22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x2ea230: 0xc0bb742  jal         func_2EDD08
    ctx->pc = 0x2EA230u;
    SET_GPR_U32(ctx, 31, 0x2EA238u);
    ctx->pc = 0x2EA234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA230u;
    // 0x2ea234: 0x26050f00  addiu       $a1, $s0, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDD08u, 0x2EA230u, 0x2EA238u)) {
        return;
    }
    ctx->pc = 0x2EA238u;
label_2ea238:
    // 0x2ea238: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ea238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea23c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea240: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ea240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea244: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA244u;
        // 0x2ea248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA24Cu;
    // 0x2ea24c: 0x0  nop
    ctx->pc = 0x2ea24cu;
    // NOP
    ctx->pc = 0x2ea250u;
}
