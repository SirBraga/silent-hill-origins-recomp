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

// Function: sub_00176D70
// Address: 0x176d70 - 0x176f08
void sub_00176D70_0x176d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176D70_0x176d70");
#endif

    switch (ctx->pc) {
        case 0x176d94u: goto label_176d94;
        case 0x176da0u: goto label_176da0;
        case 0x176de8u: goto label_176de8;
        case 0x176e1cu: goto label_176e1c;
        case 0x176e48u: goto label_176e48;
        case 0x176e7cu: goto label_176e7c;
        case 0x176e84u: goto label_176e84;
        case 0x176e94u: goto label_176e94;
        case 0x176ea0u: goto label_176ea0;
        default: break;
    }

    ctx->pc = 0x176d70u;

    // 0x176d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x176d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x176d74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176d78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x176d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x176d7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x176d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176d84: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x176d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x176d88: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x176d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x176d8c: 0xc05e258  jal         func_178960
    ctx->pc = 0x176D8Cu;
    SET_GPR_U32(ctx, 31, 0x176D94u);
    ctx->pc = 0x176D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176D8Cu;
    // 0x176d90: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178960u, 0x176D8Cu, 0x176D94u)) {
        return;
    }
    ctx->pc = 0x176D94u;
label_176d94:
    // 0x176d94: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x176D94u;
    {
        const bool branch_taken_0x176d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176d94) {
            ctx->pc = 0x176D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176D94u;
            // 0x176d98: 0xc6210104  lwc1        $f1, 0x104($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x176DB8u;
            goto label_176db8;
        }
    }
    ctx->pc = 0x176D9Cu;
    // 0x176d9c: 0x0  nop
    ctx->pc = 0x176d9cu;
    // NOP
label_176da0:
    // 0x176da0: 0x0  nop
    ctx->pc = 0x176da0u;
    // NOP
    // 0x176da4: 0x0  nop
    ctx->pc = 0x176da4u;
    // NOP
    // 0x176da8: 0x0  nop
    ctx->pc = 0x176da8u;
    // NOP
    // 0x176dac: 0x0  nop
    ctx->pc = 0x176dacu;
    // NOP
    // 0x176db0: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x176DB0u;
    {
        const bool branch_taken_0x176db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176db0) {
            ctx->pc = 0x176DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176da0;
        }
    }
    ctx->pc = 0x176DB8u;
label_176db8:
    // 0x176db8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x176db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x176dbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x176dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x176dc0: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x176dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176dc4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x176dc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x176dc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x176dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176dcc: 0x0  nop
    ctx->pc = 0x176dccu;
    // NOP
    // 0x176dd0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x176DD0u;
    {
        const bool branch_taken_0x176dd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176dd0) {
            ctx->pc = 0x176DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176DD0u;
            // 0x176dd4: 0xc6200104  lwc1        $f0, 0x104($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x176DECu;
            goto label_176dec;
        }
    }
    ctx->pc = 0x176DD8u;
    // 0x176dd8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x176dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x176ddc: 0xe6210100  swc1        $f1, 0x100($s1)
    ctx->pc = 0x176ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x176de0: 0xc041e86  jal         func_107A18
    ctx->pc = 0x176DE0u;
    SET_GPR_U32(ctx, 31, 0x176DE8u);
    ctx->pc = 0x176DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DE0u;
    // 0x176de4: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x176DE0u, 0x176DE8u)) {
        return;
    }
    ctx->pc = 0x176DE8u;
label_176de8:
    // 0x176de8: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x176de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176dec:
    // 0x176dec: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x176decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x176df0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x176df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176df4: 0xc6220100  lwc1        $f2, 0x100($s1)
    ctx->pc = 0x176df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x176df8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x176df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x176dfc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x176dfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176e00: 0x0  nop
    ctx->pc = 0x176e00u;
    // NOP
    // 0x176e04: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x176E04u;
    {
        const bool branch_taken_0x176e04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176e04) {
            ctx->pc = 0x176E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176E04u;
            // 0x176e08: 0xc6200100  lwc1        $f0, 0x100($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x176E20u;
            goto label_176e20;
        }
    }
    ctx->pc = 0x176E0Cu;
    // 0x176e0c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x176e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x176e10: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x176e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x176e14: 0xc041e86  jal         func_107A18
    ctx->pc = 0x176E14u;
    SET_GPR_U32(ctx, 31, 0x176E1Cu);
    ctx->pc = 0x176E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E14u;
    // 0x176e18: 0x248466d8  addiu       $a0, $a0, 0x66D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x176E14u, 0x176E1Cu)) {
        return;
    }
    ctx->pc = 0x176E1Cu;
label_176e1c:
    // 0x176e1c: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x176e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176e20:
    // 0x176e20: 0xc62100fc  lwc1        $f1, 0xFC($s1)
    ctx->pc = 0x176e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176e24: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x176e24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x176e28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x176e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176e2c: 0x0  nop
    ctx->pc = 0x176e2cu;
    // NOP
    // 0x176e30: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x176E30u;
    {
        const bool branch_taken_0x176e30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176e30) {
            ctx->pc = 0x176E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176E30u;
            // 0x176e34: 0xc6200104  lwc1        $f0, 0x104($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x176E4Cu;
            goto label_176e4c;
        }
    }
    ctx->pc = 0x176E38u;
    // 0x176e38: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x176e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x176e3c: 0xe62000fc  swc1        $f0, 0xFC($s1)
    ctx->pc = 0x176e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
    // 0x176e40: 0xc041e86  jal         func_107A18
    ctx->pc = 0x176E40u;
    SET_GPR_U32(ctx, 31, 0x176E48u);
    ctx->pc = 0x176E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E40u;
    // 0x176e44: 0x24846720  addiu       $a0, $a0, 0x6720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x176E40u, 0x176E48u)) {
        return;
    }
    ctx->pc = 0x176E48u;
label_176e48:
    // 0x176e48: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x176e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176e4c:
    // 0x176e4c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x176e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x176e50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x176e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x176e54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x176e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x176e58: 0xc62200fc  lwc1        $f2, 0xFC($s1)
    ctx->pc = 0x176e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x176e5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x176e5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x176e60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x176e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176e64: 0x0  nop
    ctx->pc = 0x176e64u;
    // NOP
    // 0x176e68: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x176E68u;
    {
        const bool branch_taken_0x176e68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x176E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176E68u;
        // 0x176e6c: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e68) {
            ctx->pc = 0x176E7Cu;
            goto label_176e7c;
        }
    }
    ctx->pc = 0x176E70u;
    // 0x176e70: 0xe62000fc  swc1        $f0, 0xFC($s1)
    ctx->pc = 0x176e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
    // 0x176e74: 0xc041e86  jal         func_107A18
    ctx->pc = 0x176E74u;
    SET_GPR_U32(ctx, 31, 0x176E7Cu);
    ctx->pc = 0x176E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E74u;
    // 0x176e78: 0x24846760  addiu       $a0, $a0, 0x6760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x176E74u, 0x176E7Cu)) {
        return;
    }
    ctx->pc = 0x176E7Cu;
label_176e7c:
    // 0x176e7c: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x176E7Cu;
    SET_GPR_U32(ctx, 31, 0x176E84u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x176E7Cu, 0x176E84u)) {
        return;
    }
    ctx->pc = 0x176E84u;
label_176e84:
    // 0x176e84: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x176e84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x176e88: 0xc62c0100  lwc1        $f12, 0x100($s1)
    ctx->pc = 0x176e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176e8c: 0xc0893cc  jal         func_224F30
    ctx->pc = 0x176E8Cu;
    SET_GPR_U32(ctx, 31, 0x176E94u);
    ctx->pc = 0x176E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E8Cu;
    // 0x176e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224F30u, 0x176E8Cu, 0x176E94u)) {
        return;
    }
    ctx->pc = 0x176E94u;
label_176e94:
    // 0x176e94: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x176e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x176e98: 0xc0893bc  jal         func_224EF0
    ctx->pc = 0x176E98u;
    SET_GPR_U32(ctx, 31, 0x176EA0u);
    ctx->pc = 0x176E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176E98u;
    // 0x176e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224EF0u, 0x176E98u, 0x176EA0u)) {
        return;
    }
    ctx->pc = 0x176EA0u;
label_176ea0:
    // 0x176ea0: 0xc62000fc  lwc1        $f0, 0xFC($s1)
    ctx->pc = 0x176ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176ea4: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x176ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x176ea8: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x176ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x176eac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x176EACu;
    {
        const bool branch_taken_0x176eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EACu;
        // 0x176eb0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176eac) {
            ctx->pc = 0x176ED0u;
            goto label_176ed0;
        }
    }
    ctx->pc = 0x176EB4u;
    // 0x176eb4: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x176eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    // 0x176eb8: 0x8a2400fb  lwl         $a0, 0xFB($s1)
    ctx->pc = 0x176eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 251); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x176ebc: 0x9a2400f8  lwr         $a0, 0xF8($s1)
    ctx->pc = 0x176ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 248); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x176ec0: 0xa8640013  swl         $a0, 0x13($v1)
    ctx->pc = 0x176ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x176ec4: 0xb8640010  swr         $a0, 0x10($v1)
    ctx->pc = 0x176ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x176ec8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x176EC8u;
    {
        const bool branch_taken_0x176ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176EC8u;
        // 0x176ecc: 0x8c43830c  lw          $v1, -0x7CF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ec8) {
            ctx->pc = 0x176EE8u;
            goto label_176ee8;
        }
    }
    ctx->pc = 0x176ED0u;
label_176ed0:
    // 0x176ed0: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x176ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    // 0x176ed4: 0x8a24010b  lwl         $a0, 0x10B($s1)
    ctx->pc = 0x176ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 267); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x176ed8: 0x9a240108  lwr         $a0, 0x108($s1)
    ctx->pc = 0x176ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 264); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x176edc: 0xa8640013  swl         $a0, 0x13($v1)
    ctx->pc = 0x176edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x176ee0: 0xb8640010  swr         $a0, 0x10($v1)
    ctx->pc = 0x176ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x176ee4: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x176ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
label_176ee8:
    // 0x176ee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176eec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x176eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176ef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176ef8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x176ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x176efc: 0xac6201a0  sw          $v0, 0x1A0($v1)
    ctx->pc = 0x176efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 416), GPR_U32(ctx, 2));
    // 0x176f00: 0x3e00008  jr          $ra
    ctx->pc = 0x176F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176F00u;
        // 0x176f04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176F08u;
}
