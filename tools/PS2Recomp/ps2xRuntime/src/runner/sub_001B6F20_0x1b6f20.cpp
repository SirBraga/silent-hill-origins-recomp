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

// Function: sub_001B6F20
// Address: 0x1b6f20 - 0x1b702c
void sub_001B6F20_0x1b6f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6F20_0x1b6f20");
#endif

    switch (ctx->pc) {
        case 0x1b6f94u: goto label_1b6f94;
        default: break;
    }

    ctx->pc = 0x1b6f20u;

    // 0x1b6f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6f24: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1b6f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
    // 0x1b6f28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b6f28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b6f2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6f30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b6f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b6f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f40: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1b6f40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1b6f44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b6f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6f4c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1b6f4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1b6f50: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1b6f50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b6f54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b6f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6f58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b6f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b6f5c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b6f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6f60: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1b6f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1b6f64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b6f64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b6f68: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b6f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6f6c: 0x0  nop
    ctx->pc = 0x1b6f6cu;
    // NOP
    // 0x1b6f70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6F70u;
    {
        const bool branch_taken_0x1b6f70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F70u;
        // 0x1b6f74: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f70) {
            ctx->pc = 0x1B6F7Cu;
            goto label_1b6f7c;
        }
    }
    ctx->pc = 0x1B6F78u;
    // 0x1b6f78: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x1b6f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_1b6f7c:
    // 0x1b6f7c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b6f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6f80: 0x3c01409b  lui         $at, 0x409B
    ctx->pc = 0x1b6f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16539 << 16));
    // 0x1b6f84: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b6f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1b6f88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6f8c: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1B6F8Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F94u);
    ctx->pc = 0x1B6F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F8Cu;
    // 0x1b6f90: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1B6F8Cu, 0x1B6F94u)) {
        return;
    }
    ctx->pc = 0x1B6F94u;
label_1b6f94:
    // 0x1b6f94: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b6f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6f98: 0x2623fffc  addiu       $v1, $s1, -0x4
    ctx->pc = 0x1b6f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1b6f9c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1b6f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1b6fa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b6fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6fa4: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1b6fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1b6fa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b6fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b6fac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B6FACu;
    {
        const bool branch_taken_0x1b6fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FACu;
        // 0x1b6fb0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6fac) {
            ctx->pc = 0x1B702Cu;
            return;
        }
    }
    ctx->pc = 0x1B6FB4u;
    // 0x1b6fb4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b6fb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b6fbc: 0x2442cb60  addiu       $v0, $v0, -0x34A0
    ctx->pc = 0x1b6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953824));
    // 0x1b6fc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b6fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b6fc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b6fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6fc8: 0x800008  jr          $a0
    ctx->pc = 0x1B6FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B6FD0u: goto label_1b6fd0;
            case 0x1B6FDCu: goto label_1b6fdc;
            case 0x1B6FE8u: goto label_1b6fe8;
            case 0x1B6FF8u: goto label_1b6ff8;
            case 0x1B7008u: goto label_1b7008;
            case 0x1B701Cu: goto label_1b701c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6FC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B6FD0u;
label_1b6fd0:
    // 0x1b6fd0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6fd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B6FD4u;
    {
        const bool branch_taken_0x1b6fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FD4u;
        // 0x1b6fd8: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6fd4) {
            ctx->pc = 0x1B7028u;
            goto label_1b7028;
        }
    }
    ctx->pc = 0x1B6FDCu;
label_1b6fdc:
    // 0x1b6fdc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6fe0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B6FE0u;
    {
        const bool branch_taken_0x1b6fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FE0u;
        // 0x1b6fe4: 0x46140000  add.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6fe0) {
            ctx->pc = 0x1B7028u;
            goto label_1b7028;
        }
    }
    ctx->pc = 0x1B6FE8u;
label_1b6fe8:
    // 0x1b6fe8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b6fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6fec: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1b6fecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1b6ff0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B6FF0u;
    {
        const bool branch_taken_0x1b6ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FF0u;
        // 0x1b6ff4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ff0) {
            ctx->pc = 0x1B702Cu;
            return;
        }
    }
    ctx->pc = 0x1B6FF8u;
label_1b6ff8:
    // 0x1b6ff8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b6ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6ffc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1b6ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1b7000: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B7000u;
    {
        const bool branch_taken_0x1b7000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7000u;
        // 0x1b7004: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7000) {
            ctx->pc = 0x1B702Cu;
            return;
        }
    }
    ctx->pc = 0x1B7008u;
label_1b7008:
    // 0x1b7008: 0x4614a842  mul.s       $f1, $f21, $f20
    ctx->pc = 0x1b7008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x1b700c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7010: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b7010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b7014: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7014u;
    {
        const bool branch_taken_0x1b7014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7014u;
        // 0x1b7018: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7014) {
            ctx->pc = 0x1B702Cu;
            return;
        }
    }
    ctx->pc = 0x1B701Cu;
label_1b701c:
    // 0x1b701c: 0x4614a842  mul.s       $f1, $f21, $f20
    ctx->pc = 0x1b701cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x1b7020: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b7020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7024: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b7024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b7028:
    // 0x1b7028: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b7028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->pc = 0x1b702cu;
}
