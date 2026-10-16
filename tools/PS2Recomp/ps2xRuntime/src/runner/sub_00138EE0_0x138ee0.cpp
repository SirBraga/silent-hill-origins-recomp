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

// Function: sub_00138EE0
// Address: 0x138ee0 - 0x138f70
void sub_00138EE0_0x138ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138EE0_0x138ee0");
#endif

    switch (ctx->pc) {
        case 0x138ef8u: goto label_138ef8;
        case 0x138f04u: goto label_138f04;
        case 0x138f10u: goto label_138f10;
        case 0x138f1cu: goto label_138f1c;
        case 0x138f2cu: goto label_138f2c;
        case 0x138f34u: goto label_138f34;
        case 0x138f40u: goto label_138f40;
        case 0x138f58u: goto label_138f58;
        case 0x138f60u: goto label_138f60;
        default: break;
    }

    ctx->pc = 0x138ee0u;

    // 0x138ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x138ee4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x138ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x138ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ef0: 0xc04073e  jal         func_101CF8
    ctx->pc = 0x138EF0u;
    SET_GPR_U32(ctx, 31, 0x138EF8u);
    ctx->pc = 0x138EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138EF0u;
    // 0x138ef4: 0x8e0501a8  lw          $a1, 0x1A8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101CF8u, 0x138EF0u, 0x138EF8u)) {
        return;
    }
    ctx->pc = 0x138EF8u;
label_138ef8:
    // 0x138ef8: 0x8e041aa0  lw          $a0, 0x1AA0($s0)
    ctx->pc = 0x138ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6816)));
    // 0x138efc: 0xc09d55c  jal         func_275570
    ctx->pc = 0x138EFCu;
    SET_GPR_U32(ctx, 31, 0x138F04u);
    ctx->pc = 0x138F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138EFCu;
    // 0x138f00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x138EFCu, 0x138F04u)) {
        return;
    }
    ctx->pc = 0x138F04u;
label_138f04:
    // 0x138f04: 0x8e051aac  lw          $a1, 0x1AAC($s0)
    ctx->pc = 0x138f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6828)));
    // 0x138f08: 0xc04073e  jal         func_101CF8
    ctx->pc = 0x138F08u;
    SET_GPR_U32(ctx, 31, 0x138F10u);
    ctx->pc = 0x138F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F08u;
    // 0x138f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101CF8u, 0x138F08u, 0x138F10u)) {
        return;
    }
    ctx->pc = 0x138F10u;
label_138f10:
    // 0x138f10: 0x8e041aa4  lw          $a0, 0x1AA4($s0)
    ctx->pc = 0x138f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6820)));
    // 0x138f14: 0xc09d55c  jal         func_275570
    ctx->pc = 0x138F14u;
    SET_GPR_U32(ctx, 31, 0x138F1Cu);
    ctx->pc = 0x138F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F14u;
    // 0x138f18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x138F14u, 0x138F1Cu)) {
        return;
    }
    ctx->pc = 0x138F1Cu;
label_138f1c:
    // 0x138f1c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x138f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x138f20: 0x8e041aa0  lw          $a0, 0x1AA0($s0)
    ctx->pc = 0x138f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6816)));
    // 0x138f24: 0xc09d918  jal         func_276460
    ctx->pc = 0x138F24u;
    SET_GPR_U32(ctx, 31, 0x138F2Cu);
    ctx->pc = 0x138F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F24u;
    // 0x138f28: 0x8c650020  lw          $a1, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276460u, 0x138F24u, 0x138F2Cu)) {
        return;
    }
    ctx->pc = 0x138F2Cu;
label_138f2c:
    // 0x138f2c: 0xc040950  jal         func_102540
    ctx->pc = 0x138F2Cu;
    SET_GPR_U32(ctx, 31, 0x138F34u);
    ctx->pc = 0x138F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F2Cu;
    // 0x138f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102540u, 0x138F2Cu, 0x138F34u)) {
        return;
    }
    ctx->pc = 0x138F34u;
label_138f34:
    // 0x138f34: 0x8e041aa4  lw          $a0, 0x1AA4($s0)
    ctx->pc = 0x138f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6820)));
    // 0x138f38: 0xc09d926  jal         func_276498
    ctx->pc = 0x138F38u;
    SET_GPR_U32(ctx, 31, 0x138F40u);
    ctx->pc = 0x138F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F38u;
    // 0x138f3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x138F38u, 0x138F40u)) {
        return;
    }
    ctx->pc = 0x138F40u;
label_138f40:
    // 0x138f40: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x138f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x138f44: 0x8e061aa4  lw          $a2, 0x1AA4($s0)
    ctx->pc = 0x138f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6820)));
    // 0x138f48: 0x8e051aa0  lw          $a1, 0x1AA0($s0)
    ctx->pc = 0x138f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6816)));
    // 0x138f4c: 0xc60c1aa8  lwc1        $f12, 0x1AA8($s0)
    ctx->pc = 0x138f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x138f50: 0xc09d938  jal         func_2764E0
    ctx->pc = 0x138F50u;
    SET_GPR_U32(ctx, 31, 0x138F58u);
    ctx->pc = 0x138F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F50u;
    // 0x138f54: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2764E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2764E0u, 0x138F50u, 0x138F58u)) {
        return;
    }
    ctx->pc = 0x138F58u;
label_138f58:
    // 0x138f58: 0xc040848  jal         func_102120
    ctx->pc = 0x138F58u;
    SET_GPR_U32(ctx, 31, 0x138F60u);
    ctx->pc = 0x138F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138F58u;
    // 0x138f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102120u, 0x138F58u, 0x138F60u)) {
        return;
    }
    ctx->pc = 0x138F60u;
label_138f60:
    // 0x138f60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x138f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138f68: 0x3e00008  jr          $ra
    ctx->pc = 0x138F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138F68u;
        // 0x138f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138F70u;
}
