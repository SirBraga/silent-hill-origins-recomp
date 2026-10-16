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

// Function: sub_00148F10
// Address: 0x148f10 - 0x148fd8
void sub_00148F10_0x148f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148F10_0x148f10");
#endif

    switch (ctx->pc) {
        case 0x148f24u: goto label_148f24;
        case 0x148f5cu: goto label_148f5c;
        case 0x148f64u: goto label_148f64;
        case 0x148f6cu: goto label_148f6c;
        case 0x148f74u: goto label_148f74;
        case 0x148f7cu: goto label_148f7c;
        default: break;
    }

    ctx->pc = 0x148f10u;

    // 0x148f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148f14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x148f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148f1c: 0xc051e58  jal         func_147960
    ctx->pc = 0x148F1Cu;
    SET_GPR_U32(ctx, 31, 0x148F24u);
    ctx->pc = 0x148F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F1Cu;
    // 0x148f20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x147960u, 0x148F1Cu, 0x148F24u)) {
        return;
    }
    ctx->pc = 0x148F24u;
label_148f24:
    // 0x148f24: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x148f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x148f28: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x148f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x148f2c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x148f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x148f30: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x148f30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x148f34: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x148f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
    // 0x148f38: 0x24a51620  addiu       $a1, $a1, 0x1620
    ctx->pc = 0x148f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5664));
    // 0x148f3c: 0x24c617a0  addiu       $a2, $a2, 0x17A0
    ctx->pc = 0x148f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6048));
    // 0x148f40: 0x24421660  addiu       $v0, $v0, 0x1660
    ctx->pc = 0x148f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5728));
    // 0x148f44: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x148f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x148f48: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x148f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x148f4c: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x148f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x148f50: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x148f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x148f54: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x148F54u;
    SET_GPR_U32(ctx, 31, 0x148F5Cu);
    ctx->pc = 0x148F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F54u;
    // 0x148f58: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x148F54u, 0x148F5Cu)) {
        return;
    }
    ctx->pc = 0x148F5Cu;
label_148f5c:
    // 0x148f5c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x148F5Cu;
    SET_GPR_U32(ctx, 31, 0x148F64u);
    ctx->pc = 0x148F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F5Cu;
    // 0x148f60: 0x260400e8  addiu       $a0, $s0, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x148F5Cu, 0x148F64u)) {
        return;
    }
    ctx->pc = 0x148F64u;
label_148f64:
    // 0x148f64: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x148F64u;
    SET_GPR_U32(ctx, 31, 0x148F6Cu);
    ctx->pc = 0x148F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F64u;
    // 0x148f68: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x148F64u, 0x148F6Cu)) {
        return;
    }
    ctx->pc = 0x148F6Cu;
label_148f6c:
    // 0x148f6c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x148F6Cu;
    SET_GPR_U32(ctx, 31, 0x148F74u);
    ctx->pc = 0x148F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F6Cu;
    // 0x148f70: 0x260400f8  addiu       $a0, $s0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x148F6Cu, 0x148F74u)) {
        return;
    }
    ctx->pc = 0x148F74u;
label_148f74:
    // 0x148f74: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x148F74u;
    SET_GPR_U32(ctx, 31, 0x148F7Cu);
    ctx->pc = 0x148F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F74u;
    // 0x148f78: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x148F74u, 0x148F7Cu)) {
        return;
    }
    ctx->pc = 0x148F7Cu;
label_148f7c:
    // 0x148f7c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x148f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x148f80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x148f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x148f84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x148f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148f88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x148f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x148f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x148f90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x148f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f94: 0xe6010120  swc1        $f1, 0x120($s0)
    ctx->pc = 0x148f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x148f98: 0xe6000184  swc1        $f0, 0x184($s0)
    ctx->pc = 0x148f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
    // 0x148f9c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x148f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x148fa0: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x148fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x148fa4: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x148fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x148fa8: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x148fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x148fac: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x148facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x148fb0: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x148fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x148fb4: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x148fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x148fb8: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x148fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x148fbc: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x148fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x148fc0: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x148fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x148fc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x148fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x148FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FCCu;
        // 0x148fd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148FD4u;
    // 0x148fd4: 0x0  nop
    ctx->pc = 0x148fd4u;
    // NOP
    ctx->pc = 0x148fd8u;
}
