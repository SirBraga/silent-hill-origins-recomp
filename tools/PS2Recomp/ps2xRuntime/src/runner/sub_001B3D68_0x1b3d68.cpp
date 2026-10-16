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

// Function: sub_001B3D68
// Address: 0x1b3d68 - 0x1b3ee0
void sub_001B3D68_0x1b3d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3D68_0x1b3d68");
#endif

    switch (ctx->pc) {
        case 0x1b3db8u: goto label_1b3db8;
        case 0x1b3e28u: goto label_1b3e28;
        case 0x1b3e40u: goto label_1b3e40;
        case 0x1b3e54u: goto label_1b3e54;
        case 0x1b3e70u: goto label_1b3e70;
        case 0x1b3e7cu: goto label_1b3e7c;
        default: break;
    }

    ctx->pc = 0x1b3d68u;

    // 0x1b3d68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b3d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b3d6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b3d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3d70: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x1b3d70u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b3d74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b3d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b3d78: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1b3d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1b3d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d80: 0xe7ba0060  swc1        $f26, 0x60($sp)
    ctx->pc = 0x1b3d80u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b3d84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b3d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d88: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x1b3d88u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b3d8c: 0x46006e86  mov.s       $f26, $f13
    ctx->pc = 0x1b3d8cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[13]);
    // 0x1b3d90: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x1b3d90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b3d94: 0x4600c646  mov.s       $f25, $f24
    ctx->pc = 0x1b3d94u;
    ctx->f[25] = FPU_MOV_S(ctx->f[24]);
    // 0x1b3d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3d9c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1b3d9cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1b3da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3da4: 0xe7bc0070  swc1        $f28, 0x70($sp)
    ctx->pc = 0x1b3da4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b3da8: 0xe7bb0068  swc1        $f27, 0x68($sp)
    ctx->pc = 0x1b3da8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b3dac: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1b3dacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b3db0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1b3db0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1b3db4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1b3db4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1b3db8:
    // 0x1b3db8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b3db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3dbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b3dc0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b3dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3dc4: 0x4600ce40  add.s       $f25, $f25, $f0
    ctx->pc = 0x1b3dc4u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
    // 0x1b3dc8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1b3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1b3dcc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B3DCCu;
    {
        const bool branch_taken_0x1b3dcc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1B3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DCCu;
        // 0x1b3dd0: 0x4601c600  add.s       $f24, $f24, $f1 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dcc) {
            ctx->pc = 0x1B3DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3db8;
        }
    }
    ctx->pc = 0x1B3DD4u;
    // 0x1b3dd4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b3dd8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1b3dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1b3ddc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3de0: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x1b3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33830Cu));
    // 0x1b3de4: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x1b3de4u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1b3de8: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x1b3de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x1b3dec: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x1b3decu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x1b3df0: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1b3df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1b3df4: 0x8c620198  lw          $v0, 0x198($v1)
    ctx->pc = 0x1b3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x1b3df8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3DF8u;
    {
        const bool branch_taken_0x1b3df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DF8u;
        // 0x1b3dfc: 0x4600ce42  mul.s       $f25, $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3df8) {
            ctx->pc = 0x1B3E0Cu;
            goto label_1b3e0c;
        }
    }
    ctx->pc = 0x1B3E00u;
    // 0x1b3e00: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x1b3e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x1b3e04: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x1b3e04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x1b3e08: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1b3e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_1b3e0c:
    // 0x1b3e0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3e10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3e14: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1b3e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3e18: 0x0  nop
    ctx->pc = 0x1b3e18u;
    // NOP
    // 0x1b3e1c: 0x0  nop
    ctx->pc = 0x1b3e1cu;
    // NOP
    // 0x1b3e20: 0x461b0703  div.s       $f28, $f0, $f27
    ctx->pc = 0x1b3e20u;
    ctx->f[28] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[27]);
    // 0x1b3e24: 0x0  nop
    ctx->pc = 0x1b3e24u;
    // NOP
label_1b3e28:
    // 0x1b3e28: 0xc6140000  lwc1        $f20, 0x0($s0)
    ctx->pc = 0x1b3e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3e2c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1b3e2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1b3e30: 0xc6160004  lwc1        $f22, 0x4($s0)
    ctx->pc = 0x1b3e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b3e34: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b3e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1b3e38: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x1B3E38u;
    SET_GPR_U32(ctx, 31, 0x1B3E40u);
    ctx->pc = 0x1B3E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E38u;
    // 0x1b3e3c: 0x4619a501  sub.s       $f20, $f20, $f25 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1B3E38u, 0x1B3E40u)) {
        return;
    }
    ctx->pc = 0x1B3E40u;
label_1b3e40:
    // 0x1b3e40: 0x4618b581  sub.s       $f22, $f22, $f24
    ctx->pc = 0x1b3e40u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
    // 0x1b3e44: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1b3e44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1b3e48: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1b3e48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1b3e4c: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1B3E4Cu;
    SET_GPR_U32(ctx, 31, 0x1B3E54u);
    ctx->pc = 0x1B3E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E4Cu;
    // 0x1b3e50: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1B3E4Cu, 0x1B3E54u)) {
        return;
    }
    ctx->pc = 0x1B3E54u;
label_1b3e54:
    // 0x1b3e54: 0x461bb582  mul.s       $f22, $f22, $f27
    ctx->pc = 0x1b3e54u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[27]);
    // 0x1b3e58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b3e58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b3e5c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1b3e5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1b3e60: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1b3e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1b3e64: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1b3e64u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1b3e68: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1B3E68u;
    SET_GPR_U32(ctx, 31, 0x1B3E70u);
    ctx->pc = 0x1B3E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E68u;
    // 0x1b3e6c: 0x461aa502  mul.s       $f20, $f20, $f26 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1B3E68u, 0x1B3E70u)) {
        return;
    }
    ctx->pc = 0x1B3E70u;
label_1b3e70:
    // 0x1b3e70: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1b3e70u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b3e74: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x1B3E74u;
    SET_GPR_U32(ctx, 31, 0x1B3E7Cu);
    ctx->pc = 0x1B3E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E74u;
    // 0x1b3e78: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1B3E74u, 0x1B3E7Cu)) {
        return;
    }
    ctx->pc = 0x1B3E7Cu;
label_1b3e7c:
    // 0x1b3e7c: 0x4619a500  add.s       $f20, $f20, $f25
    ctx->pc = 0x1b3e7cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[25]);
    // 0x1b3e80: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1b3e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1b3e84: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x1b3e84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b3e88: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1b3e88u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1b3e8c: 0x461aad82  mul.s       $f22, $f21, $f26
    ctx->pc = 0x1b3e8cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[21], ctx->f[26]);
    // 0x1b3e90: 0x461cb582  mul.s       $f22, $f22, $f28
    ctx->pc = 0x1b3e90u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[28]);
    // 0x1b3e94: 0x4618b580  add.s       $f22, $f22, $f24
    ctx->pc = 0x1b3e94u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[24]);
    // 0x1b3e98: 0xe6160004  swc1        $f22, 0x4($s0)
    ctx->pc = 0x1b3e98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b3e9c: 0x621ffe2  bgez        $s1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1B3E9Cu;
    {
        const bool branch_taken_0x1b3e9c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1B3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E9Cu;
        // 0x1b3ea0: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e9c) {
            ctx->pc = 0x1B3E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3e28;
        }
    }
    ctx->pc = 0x1B3EA4u;
    // 0x1b3ea4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b3ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3ea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3eb0: 0xc7bc0070  lwc1        $f28, 0x70($sp)
    ctx->pc = 0x1b3eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1b3eb4: 0xc7bb0068  lwc1        $f27, 0x68($sp)
    ctx->pc = 0x1b3eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1b3eb8: 0xc7ba0060  lwc1        $f26, 0x60($sp)
    ctx->pc = 0x1b3eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1b3ebc: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x1b3ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1b3ec0: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x1b3ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1b3ec4: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x1b3ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b3ec8: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x1b3ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b3ecc: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1b3eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b3ed0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b3ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b3ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3ED4u;
        // 0x1b3ed8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3EDCu;
    // 0x1b3edc: 0x0  nop
    ctx->pc = 0x1b3edcu;
    // NOP
    ctx->pc = 0x1b3ee0u;
}
