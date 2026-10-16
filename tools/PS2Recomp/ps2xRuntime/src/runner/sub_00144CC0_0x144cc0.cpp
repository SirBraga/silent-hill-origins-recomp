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

// Function: sub_00144CC0
// Address: 0x144cc0 - 0x1451b0
void sub_00144CC0_0x144cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144CC0_0x144cc0");
#endif

    switch (ctx->pc) {
        case 0x144d18u: goto label_144d18;
        case 0x144d34u: goto label_144d34;
        case 0x144d50u: goto label_144d50;
        case 0x144d88u: goto label_144d88;
        case 0x144d90u: goto label_144d90;
        case 0x144d9cu: goto label_144d9c;
        case 0x144ddcu: goto label_144ddc;
        case 0x144df8u: goto label_144df8;
        case 0x144e00u: goto label_144e00;
        case 0x144e0cu: goto label_144e0c;
        case 0x144e38u: goto label_144e38;
        case 0x144e58u: goto label_144e58;
        case 0x144e6cu: goto label_144e6c;
        case 0x144e88u: goto label_144e88;
        case 0x144e98u: goto label_144e98;
        case 0x144eb4u: goto label_144eb4;
        case 0x144ed0u: goto label_144ed0;
        case 0x144ef8u: goto label_144ef8;
        case 0x144f64u: goto label_144f64;
        case 0x144f94u: goto label_144f94;
        case 0x144ff0u: goto label_144ff0;
        case 0x145048u: goto label_145048;
        case 0x145088u: goto label_145088;
        case 0x1450b0u: goto label_1450b0;
        case 0x145104u: goto label_145104;
        case 0x145138u: goto label_145138;
        case 0x145154u: goto label_145154;
        case 0x145168u: goto label_145168;
        default: break;
    }

    ctx->pc = 0x144cc0u;

    // 0x144cc0: 0x27bdd6a0  addiu       $sp, $sp, -0x2960
    ctx->pc = 0x144cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956704));
    // 0x144cc4: 0x7fb528d0  sq          $s5, 0x28D0($sp)
    ctx->pc = 0x144cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10448), GPR_VEC(ctx, 21));
    // 0x144cc8: 0xe7b62940  swc1        $f22, 0x2940($sp)
    ctx->pc = 0x144cc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10560), bits); }
    // 0x144ccc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x144cccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cd0: 0x7fb02920  sq          $s0, 0x2920($sp)
    ctx->pc = 0x144cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10528), GPR_VEC(ctx, 16));
    // 0x144cd4: 0x7fb12910  sq          $s1, 0x2910($sp)
    ctx->pc = 0x144cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10512), GPR_VEC(ctx, 17));
    // 0x144cd8: 0x7fb22900  sq          $s2, 0x2900($sp)
    ctx->pc = 0x144cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10496), GPR_VEC(ctx, 18));
    // 0x144cdc: 0x7fb328f0  sq          $s3, 0x28F0($sp)
    ctx->pc = 0x144cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10480), GPR_VEC(ctx, 19));
    // 0x144ce0: 0x7fb428e0  sq          $s4, 0x28E0($sp)
    ctx->pc = 0x144ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10464), GPR_VEC(ctx, 20));
    // 0x144ce4: 0x7fb628c0  sq          $s6, 0x28C0($sp)
    ctx->pc = 0x144ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10432), GPR_VEC(ctx, 22));
    // 0x144ce8: 0x7fb728b0  sq          $s7, 0x28B0($sp)
    ctx->pc = 0x144ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10416), GPR_VEC(ctx, 23));
    // 0x144cec: 0xe7b82950  swc1        $f24, 0x2950($sp)
    ctx->pc = 0x144cecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10576), bits); }
    // 0x144cf0: 0xe7b72948  swc1        $f23, 0x2948($sp)
    ctx->pc = 0x144cf0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10568), bits); }
    // 0x144cf4: 0xe7b52938  swc1        $f21, 0x2938($sp)
    ctx->pc = 0x144cf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10552), bits); }
    // 0x144cf8: 0xe7b42930  swc1        $f20, 0x2930($sp)
    ctx->pc = 0x144cf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10544), bits); }
    // 0x144cfc: 0x7fbe28a0  sq          $fp, 0x28A0($sp)
    ctx->pc = 0x144cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 10400), GPR_VEC(ctx, 30));
    // 0x144d00: 0xffbf2890  sd          $ra, 0x2890($sp)
    ctx->pc = 0x144d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 10384), GPR_U64(ctx, 31));
    // 0x144d04: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x144d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x144d08: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x144d08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x144d0c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x144d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x144d10: 0xc07c8cc  jal         func_1F2330
    ctx->pc = 0x144D10u;
    SET_GPR_U32(ctx, 31, 0x144D18u);
    ctx->pc = 0x144D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D10u;
    // 0x144d14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2330u, 0x144D10u, 0x144D18u)) {
        return;
    }
    ctx->pc = 0x144D18u;
label_144d18:
    // 0x144d18: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x144d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x144d1c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x144d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x144d20: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x144d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x144d24: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x144d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x144d28: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x144d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x144d2c: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x144D2Cu;
    SET_GPR_U32(ctx, 31, 0x144D34u);
    ctx->pc = 0x144D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D2Cu;
    // 0x144d30: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x144D2Cu, 0x144D34u)) {
        return;
    }
    ctx->pc = 0x144D34u;
label_144d34:
    // 0x144d34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x144d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x144d38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x144d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x144d3c: 0x0  nop
    ctx->pc = 0x144d3cu;
    // NOP
    // 0x144d40: 0x0  nop
    ctx->pc = 0x144d40u;
    // NOP
    // 0x144d44: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x144d44u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
    // 0x144d48: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x144D48u;
    SET_GPR_U32(ctx, 31, 0x144D50u);
    ctx->pc = 0x144D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D48u;
    // 0x144d4c: 0xc6ac0174  lwc1        $f12, 0x174($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x144D48u, 0x144D50u)) {
        return;
    }
    ctx->pc = 0x144D50u;
label_144d50:
    // 0x144d50: 0x27a22810  addiu       $v0, $sp, 0x2810
    ctx->pc = 0x144d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 10256));
    // 0x144d54: 0x27a32820  addiu       $v1, $sp, 0x2820
    ctx->pc = 0x144d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10272));
    // 0x144d58: 0x27b42730  addiu       $s4, $sp, 0x2730
    ctx->pc = 0x144d58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 10032));
    // 0x144d5c: 0xafa22880  sw          $v0, 0x2880($sp)
    ctx->pc = 0x144d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10368), GPR_U32(ctx, 2));
    // 0x144d60: 0xafa32884  sw          $v1, 0x2884($sp)
    ctx->pc = 0x144d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10372), GPR_U32(ctx, 3));
    // 0x144d64: 0x27b72790  addiu       $s7, $sp, 0x2790
    ctx->pc = 0x144d64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 10128));
    // 0x144d68: 0x27b627f0  addiu       $s6, $sp, 0x27F0
    ctx->pc = 0x144d68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 10224));
    // 0x144d6c: 0x27b32798  addiu       $s3, $sp, 0x2798
    ctx->pc = 0x144d6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 10136));
    // 0x144d70: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x144d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x144d74: 0x27b02738  addiu       $s0, $sp, 0x2738
    ctx->pc = 0x144d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 10040));
    // 0x144d78: 0x27b12734  addiu       $s1, $sp, 0x2734
    ctx->pc = 0x144d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 10036));
    // 0x144d7c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x144d7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d80: 0x46170542  mul.s       $f21, $f0, $f23
    ctx->pc = 0x144d80u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x144d84: 0x0  nop
    ctx->pc = 0x144d84u;
    // NOP
label_144d88:
    // 0x144d88: 0xc09b164  jal         func_26C590
    ctx->pc = 0x144D88u;
    SET_GPR_U32(ctx, 31, 0x144D90u);
    ctx->pc = 0x144D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D88u;
    // 0x144d8c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x144D88u, 0x144D90u)) {
        return;
    }
    ctx->pc = 0x144D90u;
label_144d90:
    // 0x144d90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x144d90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x144d94: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x144D94u;
    SET_GPR_U32(ctx, 31, 0x144D9Cu);
    ctx->pc = 0x144D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D94u;
    // 0x144d98: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x144D94u, 0x144D9Cu)) {
        return;
    }
    ctx->pc = 0x144D9Cu;
label_144d9c:
    // 0x144d9c: 0x4618b581  sub.s       $f22, $f22, $f24
    ctx->pc = 0x144d9cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
    // 0x144da0: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x144da0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x144da4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x144da4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x144da8: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x144da8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x144dac: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x144dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x144db0: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x144db0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x144db4: 0xe6170000  swc1        $f23, 0x0($s0)
    ctx->pc = 0x144db4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x144db8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x144db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x144dbc: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x144dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x144dc0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x144DC0u;
    {
        const bool branch_taken_0x144dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DC0u;
        // 0x144dc4: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144dc0) {
            ctx->pc = 0x144D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144d88;
        }
    }
    ctx->pc = 0x144DC8u;
    // 0x144dc8: 0x8ea7012c  lw          $a3, 0x12C($s5)
    ctx->pc = 0x144dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 300)));
    // 0x144dcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x144dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x144dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dd4: 0xc093afa  jal         func_24EBE8
    ctx->pc = 0x144DD4u;
    SET_GPR_U32(ctx, 31, 0x144DDCu);
    ctx->pc = 0x144DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DD4u;
    // 0x144dd8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x144DD4u, 0x144DDCu)) {
        return;
    }
    ctx->pc = 0x144DDCu;
label_144ddc:
    // 0x144ddc: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x144ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144de0: 0x8ea5012c  lw          $a1, 0x12C($s5)
    ctx->pc = 0x144de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 300)));
    // 0x144de4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144de8: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x144de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dec: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x144decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x144df0: 0xc07c918  jal         func_1F2460
    ctx->pc = 0x144DF0u;
    SET_GPR_U32(ctx, 31, 0x144DF8u);
    ctx->pc = 0x144DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DF0u;
    // 0x144df4: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2460u, 0x144DF0u, 0x144DF8u)) {
        return;
    }
    ctx->pc = 0x144DF8u;
label_144df8:
    // 0x144df8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x144df8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dfc: 0x0  nop
    ctx->pc = 0x144dfcu;
    // NOP
label_144e00:
    // 0x144e00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x144e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e04: 0xc07c918  jal         func_1F2460
    ctx->pc = 0x144E04u;
    SET_GPR_U32(ctx, 31, 0x144E0Cu);
    ctx->pc = 0x144E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E04u;
    // 0x144e08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2460u, 0x144E04u, 0x144E0Cu)) {
        return;
    }
    ctx->pc = 0x144E0Cu;
label_144e0c:
    // 0x144e0c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x144e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x144e10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x144e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x144e14: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x144e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x144e18: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x144E18u;
    {
        const bool branch_taken_0x144e18 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x144E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E18u;
        // 0x144e1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e18) {
            ctx->pc = 0x144E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144e00;
        }
    }
    ctx->pc = 0x144E20u;
    // 0x144e20: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x144e20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e24: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x144e24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x144e28: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x144e28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e2c: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x144e2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e30: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x144e30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x144e34: 0x0  nop
    ctx->pc = 0x144e34u;
    // NOP
label_144e38:
    // 0x144e38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e3c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x144e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x144e40: 0x3d2102a  slt         $v0, $fp, $s2
    ctx->pc = 0x144e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x144e44: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x144e44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18));
    // 0x144e48: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x144e48u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x144e4c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x144e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x144e50: 0xc07c982  jal         func_1F2608
    ctx->pc = 0x144E50u;
    SET_GPR_U32(ctx, 31, 0x144E58u);
    ctx->pc = 0x144E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E50u;
    // 0x144e54: 0x2428023  subu        $s0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2608u, 0x144E50u, 0x144E58u)) {
        return;
    }
    ctx->pc = 0x144E58u;
label_144e58:
    // 0x144e58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x144e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e5c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x144e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x144e60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e64: 0xc07c8a0  jal         func_1F2280
    ctx->pc = 0x144E64u;
    SET_GPR_U32(ctx, 31, 0x144E6Cu);
    ctx->pc = 0x144E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E64u;
    // 0x144e68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2280u, 0x144E64u, 0x144E6Cu)) {
        return;
    }
    ctx->pc = 0x144E6Cu;
label_144e6c:
    // 0x144e6c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x144e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x144e70: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x144e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x144e74: 0x2f08021  addu        $s0, $s7, $s0
    ctx->pc = 0x144e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x144e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e7c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x144e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x144e80: 0xc07c8a0  jal         func_1F2280
    ctx->pc = 0x144E80u;
    SET_GPR_U32(ctx, 31, 0x144E88u);
    ctx->pc = 0x144E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E80u;
    // 0x144e84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2280u, 0x144E80u, 0x144E88u)) {
        return;
    }
    ctx->pc = 0x144E88u;
label_144e88:
    // 0x144e88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x144e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x144e8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e90: 0xc07c8a0  jal         func_1F2280
    ctx->pc = 0x144E90u;
    SET_GPR_U32(ctx, 31, 0x144E98u);
    ctx->pc = 0x144E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E90u;
    // 0x144e94: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2280u, 0x144E90u, 0x144E98u)) {
        return;
    }
    ctx->pc = 0x144E98u;
label_144e98:
    // 0x144e98: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x144e98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e9c: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x144e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x144ea0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x144EA0u;
    {
        const bool branch_taken_0x144ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144EA0u;
        // 0x144ea4: 0x24720001  addiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ea0) {
            ctx->pc = 0x144E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144e38;
        }
    }
    ctx->pc = 0x144EA8u;
    // 0x144ea8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144eac: 0xc07c982  jal         func_1F2608
    ctx->pc = 0x144EACu;
    SET_GPR_U32(ctx, 31, 0x144EB4u);
    ctx->pc = 0x144EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144EACu;
    // 0x144eb0: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2608u, 0x144EACu, 0x144EB4u)) {
        return;
    }
    ctx->pc = 0x144EB4u;
label_144eb4:
    // 0x144eb4: 0x24160007  addiu       $s6, $zero, 0x7
    ctx->pc = 0x144eb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x144eb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x144eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ebc: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x144ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x144ec0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x144ec0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x144ec4: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x144ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x144ec8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x144ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x144ecc: 0x0  nop
    ctx->pc = 0x144eccu;
    // NOP
label_144ed0:
    // 0x144ed0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x144ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144ed4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ed8: 0x282182a  slt         $v1, $s4, $v0
    ctx->pc = 0x144ed8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x144edc: 0x2c3100a  movz        $v0, $s6, $v1
    ctx->pc = 0x144edcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22));
    // 0x144ee0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x144ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ee4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x144ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x144ee8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x144ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x144eec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x144eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x144ef0: 0xc07c8a0  jal         func_1F2280
    ctx->pc = 0x144EF0u;
    SET_GPR_U32(ctx, 31, 0x144EF8u);
    ctx->pc = 0x144EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144EF0u;
    // 0x144ef4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2280u, 0x144EF0u, 0x144EF8u)) {
        return;
    }
    ctx->pc = 0x144EF8u;
label_144ef8:
    // 0x144ef8: 0x601fff5  bgez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x144EF8u;
    {
        const bool branch_taken_0x144ef8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x144EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144EF8u;
        // 0x144efc: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ef8) {
            ctx->pc = 0x144ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144ed0;
        }
    }
    ctx->pc = 0x144F00u;
    // 0x144f00: 0x8ea3012c  lw          $v1, 0x12C($s5)
    ctx->pc = 0x144f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 300)));
    // 0x144f04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f08: 0x8ea20128  lw          $v0, 0x128($s5)
    ctx->pc = 0x144f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
    // 0x144f0c: 0x8fa52880  lw          $a1, 0x2880($sp)
    ctx->pc = 0x144f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10368)));
    // 0x144f10: 0x68660027  ldl         $a2, 0x27($v1)
    ctx->pc = 0x144f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x144f14: 0x6c660020  ldr         $a2, 0x20($v1)
    ctx->pc = 0x144f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x144f18: 0x8c670028  lw          $a3, 0x28($v1)
    ctx->pc = 0x144f18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x144f1c: 0xb3a62817  sdl         $a2, 0x2817($sp)
    ctx->pc = 0x144f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 10263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x144f20: 0xb7a62810  sdr         $a2, 0x2810($sp)
    ctx->pc = 0x144f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 10256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x144f24: 0xafa72818  sw          $a3, 0x2818($sp)
    ctx->pc = 0x144f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10264), GPR_U32(ctx, 7));
    // 0x144f28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f2c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x144f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144f30: 0xc4440034  lwc1        $f4, 0x34($v0)
    ctx->pc = 0x144f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x144f34: 0xc7a02810  lwc1        $f0, 0x2810($sp)
    ctx->pc = 0x144f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f38: 0xc7a22814  lwc1        $f2, 0x2814($sp)
    ctx->pc = 0x144f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x144f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x144f40: 0xc4430038  lwc1        $f3, 0x38($v0)
    ctx->pc = 0x144f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x144f44: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x144f44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x144f48: 0xc7a12818  lwc1        $f1, 0x2818($sp)
    ctx->pc = 0x144f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144f4c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x144f4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x144f50: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x144f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x144f54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x144f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x144f58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x144f58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x144f5c: 0xc07c726  jal         func_1F1C98
    ctx->pc = 0x144F5Cu;
    SET_GPR_U32(ctx, 31, 0x144F64u);
    ctx->pc = 0x144F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144F5Cu;
    // 0x144f60: 0xe7a0281c  swc1        $f0, 0x281C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10268), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F1C98u, 0x144F5Cu, 0x144F64u)) {
        return;
    }
    ctx->pc = 0x144F64u;
label_144f64:
    // 0x144f64: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x144f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x144f68: 0x8c62870c  lw          $v0, -0x78F4($v1)
    ctx->pc = 0x144f68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33870Cu));
    // 0x144f6c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x144f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x144f70: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x144F70u;
    {
        const bool branch_taken_0x144f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x144F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F70u;
        // 0x144f74: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f70) {
            ctx->pc = 0x145090u;
            goto label_145090;
        }
    }
    ctx->pc = 0x144F78u;
    // 0x144f78: 0x24650114  addiu       $a1, $v1, 0x114
    ctx->pc = 0x144f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
    // 0x144f7c: 0x24440db8  addiu       $a0, $v0, 0xDB8
    ctx->pc = 0x144f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3512));
    // 0x144f80: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x144f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x144f84: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x144F84u;
    {
        const bool branch_taken_0x144f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F84u;
        // 0x144f88: 0x8fa32884  lw          $v1, 0x2884($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f84) {
            ctx->pc = 0x144FE8u;
            goto label_144fe8;
        }
    }
    ctx->pc = 0x144F8Cu;
    // 0x144f8c: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x144f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x144f90: 0x27b32870  addiu       $s3, $sp, 0x2870
    ctx->pc = 0x144f90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 10352));
label_144f94:
    // 0x144f94: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x144f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x144f98: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x144f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x144f9c: 0x6887000f  ldl         $a3, 0xF($a0)
    ctx->pc = 0x144f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x144fa0: 0x6c870008  ldr         $a3, 0x8($a0)
    ctx->pc = 0x144fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x144fa4: 0x68880017  ldl         $t0, 0x17($a0)
    ctx->pc = 0x144fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x144fa8: 0x6c880010  ldr         $t0, 0x10($a0)
    ctx->pc = 0x144fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x144fac: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x144facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x144fb0: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x144fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x144fb4: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x144fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x144fb8: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x144fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x144fbc: 0xb067000f  sdl         $a3, 0xF($v1)
    ctx->pc = 0x144fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x144fc0: 0xb4670008  sdr         $a3, 0x8($v1)
    ctx->pc = 0x144fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x144fc4: 0xb0680017  sdl         $t0, 0x17($v1)
    ctx->pc = 0x144fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x144fc8: 0xb4680010  sdr         $t0, 0x10($v1)
    ctx->pc = 0x144fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x144fcc: 0xb069001f  sdl         $t1, 0x1F($v1)
    ctx->pc = 0x144fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x144fd0: 0xb4690018  sdr         $t1, 0x18($v1)
    ctx->pc = 0x144fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x144fd4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x144fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x144fd8: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x144FD8u;
    {
        const bool branch_taken_0x144fd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x144FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144FD8u;
        // 0x144fdc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144fd8) {
            ctx->pc = 0x144F94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144f94;
        }
    }
    ctx->pc = 0x144FE0u;
    // 0x144fe0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x144FE0u;
    {
        const bool branch_taken_0x144fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144FE0u;
        // 0x144fe4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144fe0) {
            ctx->pc = 0x145020u;
            goto label_145020;
        }
    }
    ctx->pc = 0x144FE8u;
label_144fe8:
    // 0x144fe8: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x144fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x144fec: 0x27b32870  addiu       $s3, $sp, 0x2870
    ctx->pc = 0x144fecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 10352));
label_144ff0:
    // 0x144ff0: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x144ff0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144ff4: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x144ff4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x144ff8: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x144ff8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x144ffc: 0xdc890018  ld          $t1, 0x18($a0)
    ctx->pc = 0x144ffcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x145000: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x145000u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x145004: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x145004u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x145008: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x145008u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x14500c: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x14500cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x145010: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x145010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x145014: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x145014u;
    {
        const bool branch_taken_0x145014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x145018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145014u;
        // 0x145018: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145014) {
            ctx->pc = 0x144FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144ff0;
        }
    }
    ctx->pc = 0x14501Cu;
    // 0x14501c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14501cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_145020:
    // 0x145020: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x145020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x145024: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x145024u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x145028: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x145028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14502c: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x14502cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x145030: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x145030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x145034: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x145034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x145038: 0x27b02820  addiu       $s0, $sp, 0x2820
    ctx->pc = 0x145038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 10272));
    // 0x14503c: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x14503cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x145040: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x145040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x145044: 0x0  nop
    ctx->pc = 0x145044u;
    // NOP
label_145048:
    // 0x145048: 0x6a080007  ldl         $t0, 0x7($s0)
    ctx->pc = 0x145048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x14504c: 0x6e080000  ldr         $t0, 0x0($s0)
    ctx->pc = 0x14504cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x145050: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x145050u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x145054: 0xb3a82877  sdl         $t0, 0x2877($sp)
    ctx->pc = 0x145054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 10359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x145058: 0xb7a82870  sdr         $t0, 0x2870($sp)
    ctx->pc = 0x145058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 10352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14505c: 0xafa92878  sw          $t1, 0x2878($sp)
    ctx->pc = 0x14505cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10360), GPR_U32(ctx, 9));
    // 0x145060: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x145060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145064: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x145064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145068: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14506c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x14506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145070: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x145070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x145074: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x145074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x145078: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x145078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x14507c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x14507cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x145080: 0xc07c726  jal         func_1F1C98
    ctx->pc = 0x145080u;
    SET_GPR_U32(ctx, 31, 0x145088u);
    ctx->pc = 0x145084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145080u;
    // 0x145084: 0xe7a0287c  swc1        $f0, 0x287C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10364), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F1C98u, 0x145080u, 0x145088u)) {
        return;
    }
    ctx->pc = 0x145088u;
label_145088:
    // 0x145088: 0x641ffef  bgez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x145088u;
    {
        const bool branch_taken_0x145088 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x145088) {
            ctx->pc = 0x145048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145048;
        }
    }
    ctx->pc = 0x145090u;
label_145090:
    // 0x145090: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x145090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x145094: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x145094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x145098: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x145098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x14509c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14509cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1450a0: 0x8c430fc8  lw          $v1, 0xFC8($v0)
    ctx->pc = 0x1450a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x730FC8u));
    // 0x1450a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1450a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450a8: 0x24700094  addiu       $s0, $v1, 0x94
    ctx->pc = 0x1450a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 148));
    // 0x1450ac: 0x0  nop
    ctx->pc = 0x1450acu;
    // NOP
label_1450b0:
    // 0x1450b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1450b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1450b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1450b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1450b8: 0xe7a02820  swc1        $f0, 0x2820($sp)
    ctx->pc = 0x1450b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10272), bits); }
    // 0x1450bc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1450bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1450c0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1450c0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1450c4: 0xe7a12824  swc1        $f1, 0x2824($sp)
    ctx->pc = 0x1450c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10276), bits); }
    // 0x1450c8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1450c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1450cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1450ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1450d0: 0xe7a02828  swc1        $f0, 0x2828($sp)
    ctx->pc = 0x1450d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10280), bits); }
    // 0x1450d4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1450d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1450d8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1450d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1450dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1450DCu;
    {
        const bool branch_taken_0x1450dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1450E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450DCu;
        // 0x1450e0: 0xe7a0282c  swc1        $f0, 0x282C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450dc) {
            ctx->pc = 0x1450F0u;
            goto label_1450f0;
        }
    }
    ctx->pc = 0x1450E4u;
    // 0x1450e4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1450e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1450e8: 0xe7a0282c  swc1        $f0, 0x282C($sp)
    ctx->pc = 0x1450e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10284), bits); }
    // 0x1450ec: 0x0  nop
    ctx->pc = 0x1450ecu;
    // NOP
label_1450f0:
    // 0x1450f0: 0x8fa52884  lw          $a1, 0x2884($sp)
    ctx->pc = 0x1450f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 10372)));
    // 0x1450f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1450f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1450f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450fc: 0xc07c726  jal         func_1F1C98
    ctx->pc = 0x1450FCu;
    SET_GPR_U32(ctx, 31, 0x145104u);
    ctx->pc = 0x145100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450FCu;
    // 0x145100: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F1C98u, 0x1450FCu, 0x145104u)) {
        return;
    }
    ctx->pc = 0x145104u;
label_145104:
    // 0x145104: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x145104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x145108: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x145108u;
    {
        const bool branch_taken_0x145108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145108u;
        // 0x14510c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145108) {
            ctx->pc = 0x1450B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1450b0;
        }
    }
    ctx->pc = 0x145110u;
    // 0x145110: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x145110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x145114: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x145114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x145118: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x145118u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x14511c: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x14511cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x145120: 0x24a555c8  addiu       $a1, $a1, 0x55C8
    ctx->pc = 0x145120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21960));
    // 0x145124: 0x24c684c0  addiu       $a2, $a2, -0x7B40
    ctx->pc = 0x145124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935744));
    // 0x145128: 0x24e7e268  addiu       $a3, $a3, -0x1D98
    ctx->pc = 0x145128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959720));
    // 0x14512c: 0x250884c4  addiu       $t0, $t0, -0x7B3C
    ctx->pc = 0x14512cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935748));
    // 0x145130: 0xc07c62e  jal         func_1F18B8
    ctx->pc = 0x145130u;
    SET_GPR_U32(ctx, 31, 0x145138u);
    ctx->pc = 0x145134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145130u;
    // 0x145134: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F18B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F18B8u, 0x145130u, 0x145138u)) {
        return;
    }
    ctx->pc = 0x145138u;
label_145138:
    // 0x145138: 0x8ea201d0  lw          $v0, 0x1D0($s5)
    ctx->pc = 0x145138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 464)));
    // 0x14513c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14513Cu;
    {
        const bool branch_taken_0x14513c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14513c) {
            ctx->pc = 0x145140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14513Cu;
            // 0x145140: 0xaea001c4  sw          $zero, 0x1C4($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 452), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14515Cu;
            goto label_14515c;
        }
    }
    ctx->pc = 0x145144u;
    // 0x145144: 0xaea001a8  sw          $zero, 0x1A8($s5)
    ctx->pc = 0x145144u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 424), GPR_U32(ctx, 0));
    // 0x145148: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x145148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14514c: 0xc07c8d8  jal         func_1F2360
    ctx->pc = 0x14514Cu;
    SET_GPR_U32(ctx, 31, 0x145154u);
    ctx->pc = 0x145150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14514Cu;
    // 0x145150: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2360u, 0x14514Cu, 0x145154u)) {
        return;
    }
    ctx->pc = 0x145154u;
label_145154:
    // 0x145154: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145154u;
    {
        const bool branch_taken_0x145154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145154u;
        // 0x145158: 0x7bb02920  lq          $s0, 0x2920($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145154) {
            ctx->pc = 0x14516Cu;
            goto label_14516c;
        }
    }
    ctx->pc = 0x14515Cu;
label_14515c:
    // 0x14515c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14515cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145160: 0xc07c8d8  jal         func_1F2360
    ctx->pc = 0x145160u;
    SET_GPR_U32(ctx, 31, 0x145168u);
    ctx->pc = 0x145164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145160u;
    // 0x145164: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2360u, 0x145160u, 0x145168u)) {
        return;
    }
    ctx->pc = 0x145168u;
label_145168:
    // 0x145168: 0x7bb02920  lq          $s0, 0x2920($sp)
    ctx->pc = 0x145168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 10528)));
label_14516c:
    // 0x14516c: 0x7bb12910  lq          $s1, 0x2910($sp)
    ctx->pc = 0x14516cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 10512)));
    // 0x145170: 0x7bb22900  lq          $s2, 0x2900($sp)
    ctx->pc = 0x145170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 10496)));
    // 0x145174: 0x7bb328f0  lq          $s3, 0x28F0($sp)
    ctx->pc = 0x145174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 10480)));
    // 0x145178: 0x7bb428e0  lq          $s4, 0x28E0($sp)
    ctx->pc = 0x145178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 10464)));
    // 0x14517c: 0x7bb528d0  lq          $s5, 0x28D0($sp)
    ctx->pc = 0x14517cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 10448)));
    // 0x145180: 0x7bb628c0  lq          $s6, 0x28C0($sp)
    ctx->pc = 0x145180u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 10432)));
    // 0x145184: 0x7bb728b0  lq          $s7, 0x28B0($sp)
    ctx->pc = 0x145184u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 10416)));
    // 0x145188: 0x7bbe28a0  lq          $fp, 0x28A0($sp)
    ctx->pc = 0x145188u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 10400)));
    // 0x14518c: 0xdfbf2890  ld          $ra, 0x2890($sp)
    ctx->pc = 0x14518cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 10384)));
    // 0x145190: 0xc7b82950  lwc1        $f24, 0x2950($sp)
    ctx->pc = 0x145190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x145194: 0xc7b72948  lwc1        $f23, 0x2948($sp)
    ctx->pc = 0x145194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x145198: 0xc7b62940  lwc1        $f22, 0x2940($sp)
    ctx->pc = 0x145198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14519c: 0xc7b52938  lwc1        $f21, 0x2938($sp)
    ctx->pc = 0x14519cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1451a0: 0xc7b42930  lwc1        $f20, 0x2930($sp)
    ctx->pc = 0x1451a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1451a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1451A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1451A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451A4u;
        // 0x1451a8: 0x27bd2960  addiu       $sp, $sp, 0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1451A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1451ACu;
    // 0x1451ac: 0x0  nop
    ctx->pc = 0x1451acu;
    // NOP
    ctx->pc = 0x1451b0u;
}
