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

// Function: sub_00126BD8
// Address: 0x126bd8 - 0x126c50
void sub_00126BD8_0x126bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126BD8_0x126bd8");
#endif

    switch (ctx->pc) {
        case 0x126c0cu: goto label_126c0c;
        case 0x126c1cu: goto label_126c1c;
        case 0x126c24u: goto label_126c24;
        case 0x126c34u: goto label_126c34;
        default: break;
    }

    ctx->pc = 0x126bd8u;

    // 0x126bd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x126bdc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x126bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x126be0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x126be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x126be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126be8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x126be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x126bec: 0x26110320  addiu       $s1, $s0, 0x320
    ctx->pc = 0x126becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x126bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bf8: 0x26050d2c  addiu       $a1, $s0, 0xD2C
    ctx->pc = 0x126bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3372));
    // 0x126bfc: 0x26120d54  addiu       $s2, $s0, 0xD54
    ctx->pc = 0x126bfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3412));
    // 0x126c00: 0x8e0601c8  lw          $a2, 0x1C8($s0)
    ctx->pc = 0x126c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x126c04: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x126C04u;
    SET_GPR_U32(ctx, 31, 0x126C0Cu);
    ctx->pc = 0x126C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C04u;
    // 0x126c08: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x126C04u, 0x126C0Cu)) {
        return;
    }
    ctx->pc = 0x126C0Cu;
label_126c0c:
    // 0x126c0c: 0xc62c0810  lwc1        $f12, 0x810($s1)
    ctx->pc = 0x126c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x126c10: 0x26050d4c  addiu       $a1, $s0, 0xD4C
    ctx->pc = 0x126c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3404));
    // 0x126c14: 0xc06802e  jal         func_1A00B8
    ctx->pc = 0x126C14u;
    SET_GPR_U32(ctx, 31, 0x126C1Cu);
    ctx->pc = 0x126C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C14u;
    // 0x126c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x126C14u, 0x126C1Cu)) {
        return;
    }
    ctx->pc = 0x126C1Cu;
label_126c1c:
    // 0x126c1c: 0xc04094c  jal         func_102530
    ctx->pc = 0x126C1Cu;
    SET_GPR_U32(ctx, 31, 0x126C24u);
    ctx->pc = 0x126C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C1Cu;
    // 0x126c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x126C1Cu, 0x126C24u)) {
        return;
    }
    ctx->pc = 0x126C24u;
label_126c24:
    // 0x126c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x126c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c2c: 0xc06802e  jal         func_1A00B8
    ctx->pc = 0x126C2Cu;
    SET_GPR_U32(ctx, 31, 0x126C34u);
    ctx->pc = 0x126C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C2Cu;
    // 0x126c30: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x126C2Cu, 0x126C34u)) {
        return;
    }
    ctx->pc = 0x126C34u;
label_126c34:
    // 0x126c34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x126c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126c38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x126c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126c3c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x126c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126c44: 0x3e00008  jr          $ra
    ctx->pc = 0x126C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C44u;
        // 0x126c48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126C4Cu;
    // 0x126c4c: 0x0  nop
    ctx->pc = 0x126c4cu;
    // NOP
    ctx->pc = 0x126c50u;
}
