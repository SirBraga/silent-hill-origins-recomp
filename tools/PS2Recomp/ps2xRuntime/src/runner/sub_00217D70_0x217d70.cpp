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

// Function: sub_00217D70
// Address: 0x217d70 - 0x2182d8
void sub_00217D70_0x217d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217D70_0x217d70");
#endif

    switch (ctx->pc) {
        case 0x217d9cu: goto label_217d9c;
        case 0x217e08u: goto label_217e08;
        default: break;
    }

    ctx->pc = 0x217d70u;

    // 0x217d70: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x217d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d74: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x217d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x217d78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x217d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d7c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x217d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x217d80: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x217d80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d84: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217D84u;
    {
        const bool branch_taken_0x217d84 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x217D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D84u;
        // 0x217d88: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d84) {
            ctx->pc = 0x217DA4u;
            goto label_217da4;
        }
    }
    ctx->pc = 0x217D8Cu;
    // 0x217d8c: 0x10a0014e  beqz        $a1, . + 4 + (0x14E << 2)
    ctx->pc = 0x217D8Cu;
    {
        const bool branch_taken_0x217d8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D8Cu;
        // 0x217d90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d8c) {
            ctx->pc = 0x2182C8u;
            goto label_2182c8;
        }
    }
    ctx->pc = 0x217D94u;
    // 0x217d94: 0xc0860b6  jal         func_2182D8
    ctx->pc = 0x217D94u;
    SET_GPR_U32(ctx, 31, 0x217D9Cu);
    ctx->pc = 0x217D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D94u;
    // 0x217d98: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2182D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2182D8u, 0x217D94u, 0x217D9Cu)) {
        return;
    }
    ctx->pc = 0x217D9Cu;
label_217d9c:
    // 0x217d9c: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x217D9Cu;
    {
        const bool branch_taken_0x217d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D9Cu;
        // 0x217da0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d9c) {
            ctx->pc = 0x2182CCu;
            goto label_2182cc;
        }
    }
    ctx->pc = 0x217DA4u;
label_217da4:
    // 0x217da4: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x217da4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217dac: 0x15820006  bne         $t4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x217DACu;
    {
        const bool branch_taken_0x217dac = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x217DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DACu;
        // 0x217db0: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217dac) {
            ctx->pc = 0x217DC8u;
            goto label_217dc8;
        }
    }
    ctx->pc = 0x217DB4u;
    // 0x217db4: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x217db4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217db8: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x217db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x217dbc: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x217dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x217dc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x217DC0u;
    {
        const bool branch_taken_0x217dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DC0u;
        // 0x217dc4: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217dc0) {
            ctx->pc = 0x217DE8u;
            goto label_217de8;
        }
    }
    ctx->pc = 0x217DC8u;
label_217dc8:
    // 0x217dc8: 0x8d430014  lw          $v1, 0x14($t2)
    ctx->pc = 0x217dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x217dcc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x217dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x217dd0: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x217dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x217dd4: 0x626821  addu        $t5, $v1, $v0
    ctx->pc = 0x217dd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217dd8: 0x95ab0000  lhu         $t3, 0x0($t5)
    ctx->pc = 0x217dd8u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x217ddc: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x217ddcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x217de0: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x217de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x217de4: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x217de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_217de8:
    // 0x217de8: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x217de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x217dec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x217decu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x217df0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x217df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x217df4: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x217df4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217df8: 0x19000104  blez        $t0, . + 4 + (0x104 << 2)
    ctx->pc = 0x217DF8u;
    {
        const bool branch_taken_0x217df8 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x217DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DF8u;
        // 0x217dfc: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217df8) {
            ctx->pc = 0x21820Cu;
            goto label_21820c;
        }
    }
    ctx->pc = 0x217E00u;
    // 0x217e00: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x217e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x217e04: 0x0  nop
    ctx->pc = 0x217e04u;
    // NOP
label_217e08:
    // 0x217e08: 0x94e20006  lhu         $v0, 0x6($a3)
    ctx->pc = 0x217e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x217e0c: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x217e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x217e10: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x217e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x217e14: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x217e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217e18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x217e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x217e1c: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x217e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x217e20: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x217e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217e24: 0x46000a46  mov.s       $f9, $f1
    ctx->pc = 0x217e24u;
    ctx->f[9] = FPU_MOV_S(ctx->f[1]);
    // 0x217e28: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x217e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217e2c: 0xc5050004  lwc1        $f5, 0x4($t0)
    ctx->pc = 0x217e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x217e30: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x217e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x217e34: 0xc5060008  lwc1        $f6, 0x8($t0)
    ctx->pc = 0x217e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x217e38: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x217e38u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x217e3c: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x217e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x217e40: 0xc4c7000c  lwc1        $f7, 0xC($a2)
    ctx->pc = 0x217e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x217e44: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x217e44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x217e48: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x217e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x217e4c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x217e4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x217e50: 0x46003a06  mov.s       $f8, $f7
    ctx->pc = 0x217e50u;
    ctx->f[8] = FPU_MOV_S(ctx->f[7]);
    // 0x217e54: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x217e54u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x217e58: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x217e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x217e5c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x217e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x217e60: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x217e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x217e64: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x217e64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x217e68: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x217e68u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x217e6c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x217e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x217e70: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x217e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x217e74: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x217e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x217e78: 0x46017036  c.le.s      $f14, $f1
    ctx->pc = 0x217e78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217e7c: 0x0  nop
    ctx->pc = 0x217e7cu;
    // NOP
    // 0x217e80: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x217E80u;
    {
        const bool branch_taken_0x217e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x217E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E80u;
        // 0x217e84: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e80) {
            ctx->pc = 0x217E98u;
            goto label_217e98;
        }
    }
    ctx->pc = 0x217E88u;
    // 0x217e88: 0x460e1034  c.lt.s      $f2, $f14
    ctx->pc = 0x217e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217e8c: 0x0  nop
    ctx->pc = 0x217e8cu;
    // NOP
    // 0x217e90: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x217E90u;
    {
        const bool branch_taken_0x217e90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x217e90) {
            ctx->pc = 0x217E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217E90u;
            // 0x217e94: 0x46011341  sub.s       $f13, $f2, $f1 (Delay Slot)
            ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x217EF4u;
            goto label_217ef4;
        }
    }
    ctx->pc = 0x217E98u;
label_217e98:
    // 0x217e98: 0x460e0834  c.lt.s      $f1, $f14
    ctx->pc = 0x217e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217e9c: 0x0  nop
    ctx->pc = 0x217e9cu;
    // NOP
    // 0x217ea0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x217EA0u;
    {
        const bool branch_taken_0x217ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217ea0) {
            ctx->pc = 0x217EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217EA0u;
            // 0x217ea4: 0x46010802  mul.s       $f0, $f1, $f1 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x217EBCu;
            goto label_217ebc;
        }
    }
    ctx->pc = 0x217EA8u;
    // 0x217ea8: 0x46027034  c.lt.s      $f14, $f2
    ctx->pc = 0x217ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217eac: 0x0  nop
    ctx->pc = 0x217eacu;
    // NOP
    // 0x217eb0: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x217EB0u;
    {
        const bool branch_taken_0x217eb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x217eb0) {
            ctx->pc = 0x217EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217EB0u;
            // 0x217eb4: 0x46011341  sub.s       $f13, $f2, $f1 (Delay Slot)
            ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x217EF4u;
            goto label_217ef4;
        }
    }
    ctx->pc = 0x217EB8u;
    // 0x217eb8: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x217eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_217ebc:
    // 0x217ebc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x217ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x217ec0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x217ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x217ec4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x217ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x217ec8: 0x0  nop
    ctx->pc = 0x217ec8u;
    // NOP
    // 0x217ecc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x217eccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217ed0: 0x0  nop
    ctx->pc = 0x217ed0u;
    // NOP
    // 0x217ed4: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x217ED4u;
    {
        const bool branch_taken_0x217ed4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x217ed4) {
            ctx->pc = 0x217ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217ED4u;
            // 0x217ed8: 0x46011341  sub.s       $f13, $f2, $f1 (Delay Slot)
            ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x217EF4u;
            goto label_217ef4;
        }
    }
    ctx->pc = 0x217EDCu;
    // 0x217edc: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x217edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x217ee0: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x217ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217ee4: 0x0  nop
    ctx->pc = 0x217ee4u;
    // NOP
    // 0x217ee8: 0x450200c0  bc1fl       . + 4 + (0xC0 << 2)
    ctx->pc = 0x217EE8u;
    {
        const bool branch_taken_0x217ee8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217ee8) {
            ctx->pc = 0x217EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217EE8u;
            // 0x217eec: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2181ECu;
            goto label_2181ec;
        }
    }
    ctx->pc = 0x217EF0u;
    // 0x217ef0: 0x46011341  sub.s       $f13, $f2, $f1
    ctx->pc = 0x217ef0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_217ef4:
    // 0x217ef4: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x217ef4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x217ef8: 0x0  nop
    ctx->pc = 0x217ef8u;
    // NOP
    // 0x217efc: 0x460d0303  div.s       $f12, $f0, $f13
    ctx->pc = 0x217efcu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[13]);
    // 0x217f00: 0x460f6034  c.lt.s      $f12, $f15
    ctx->pc = 0x217f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217f04: 0x0  nop
    ctx->pc = 0x217f04u;
    // NOP
    // 0x217f08: 0x450200b8  bc1fl       . + 4 + (0xB8 << 2)
    ctx->pc = 0x217F08u;
    {
        const bool branch_taken_0x217f08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217f08) {
            ctx->pc = 0x217F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217F08u;
            // 0x217f0c: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2181ECu;
            goto label_2181ec;
        }
    }
    ctx->pc = 0x217F10u;
    // 0x217f10: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x217f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x217f14: 0x46094081  sub.s       $f2, $f8, $f9
    ctx->pc = 0x217f14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
    // 0x217f18: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x217f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x217f1c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x217f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f20: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x217f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217f24: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x217f24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x217f28: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x217f28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x217f2c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x217f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x217f30: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x217f30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x217f34: 0x46091280  add.s       $f10, $f2, $f9
    ctx->pc = 0x217f34u;
    ctx->f[10] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
    // 0x217f38: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x217f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x217f3c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x217f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x217f40: 0xe7aa0010  swc1        $f10, 0x10($sp)
    ctx->pc = 0x217f40u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x217f44: 0x46040240  add.s       $f9, $f0, $f4
    ctx->pc = 0x217f44u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x217f48: 0x46030ac0  add.s       $f11, $f1, $f3
    ctx->pc = 0x217f48u;
    ctx->f[11] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x217f4c: 0xe7a90014  swc1        $f9, 0x14($sp)
    ctx->pc = 0x217f4cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x217f50: 0xe7ab0018  swc1        $f11, 0x18($sp)
    ctx->pc = 0x217f50u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x217f54: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x217f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x217f58: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x217f58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x217f5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x217f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x217f60: 0x94e40004  lhu         $a0, 0x4($a3)
    ctx->pc = 0x217f60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x217f64: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x217f64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x217f68: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x217f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x217f6c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x217f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x217f70: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x217f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x217f74: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x217f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x217f78: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x217f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x217f7c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x217f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f80: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x217f80u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x217f84: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x217f84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x217f88: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x217f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f8c: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x217f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x217f90: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x217f90u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x217f94: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x217f94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x217f98: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x217f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x217f9c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x217f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217fa0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x217fa0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x217fa4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x217fa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x217fa8: 0xc5250000  lwc1        $f5, 0x0($t1)
    ctx->pc = 0x217fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x217fac: 0x46055141  sub.s       $f5, $f10, $f5
    ctx->pc = 0x217facu;
    ctx->f[5] = FPU_SUB_S(ctx->f[10], ctx->f[5]);
    // 0x217fb0: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x217fb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x217fb4: 0xc5280004  lwc1        $f8, 0x4($t1)
    ctx->pc = 0x217fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x217fb8: 0x46084a01  sub.s       $f8, $f9, $f8
    ctx->pc = 0x217fb8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
    // 0x217fbc: 0xe7a80044  swc1        $f8, 0x44($sp)
    ctx->pc = 0x217fbcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x217fc0: 0xc5270008  lwc1        $f7, 0x8($t1)
    ctx->pc = 0x217fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x217fc4: 0x460759c1  sub.s       $f7, $f11, $f7
    ctx->pc = 0x217fc4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[11], ctx->f[7]);
    // 0x217fc8: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x217fc8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x217fcc: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x217fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x217fd0: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x217fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217fd4: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x217fd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x217fd8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x217fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x217fdc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x217fdcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x217fe0: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x217fe0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x217fe4: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x217fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217fe8: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x217fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217fec: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x217fecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x217ff0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x217ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x217ff4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x217ff4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x217ff8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x217ff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x217ffc: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x217ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218000: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x218000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218004: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x218004u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x218008: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x218008u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x21800c: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x21800cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x218010: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x218010u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x218014: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x218014u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x218018: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x218018u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x21801c: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x21801cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x218020: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x218020u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x218024: 0x46057034  c.lt.s      $f14, $f5
    ctx->pc = 0x218024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218028: 0x0  nop
    ctx->pc = 0x218028u;
    // NOP
    // 0x21802c: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
    ctx->pc = 0x21802Cu;
    {
        const bool branch_taken_0x21802c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21802Cu;
        // 0x218030: 0xe7a40038  swc1        $f4, 0x38($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21802c) {
            ctx->pc = 0x2181E8u;
            goto label_2181e8;
        }
    }
    ctx->pc = 0x218034u;
    // 0x218034: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x218034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218038: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x218038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21803c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x21803cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x218040: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x218040u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x218044: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x218044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218048: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x218048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21804c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x21804cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x218050: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x218050u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x218054: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x218054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x218058: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x218058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21805c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x21805cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x218060: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x218060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x218064: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x218064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x218068: 0x46055141  sub.s       $f5, $f10, $f5
    ctx->pc = 0x218068u;
    ctx->f[5] = FPU_SUB_S(ctx->f[10], ctx->f[5]);
    // 0x21806c: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x21806cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x218070: 0xc4480004  lwc1        $f8, 0x4($v0)
    ctx->pc = 0x218070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x218074: 0x46084a01  sub.s       $f8, $f9, $f8
    ctx->pc = 0x218074u;
    ctx->f[8] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
    // 0x218078: 0xe7a80044  swc1        $f8, 0x44($sp)
    ctx->pc = 0x218078u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21807c: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x21807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x218080: 0x460759c1  sub.s       $f7, $f11, $f7
    ctx->pc = 0x218080u;
    ctx->f[7] = FPU_SUB_S(ctx->f[11], ctx->f[7]);
    // 0x218084: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x218084u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x218088: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x218088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21808c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x21808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218090: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x218090u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x218094: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x218094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x218098: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x218098u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x21809c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x21809cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2180a0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x2180a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2180a4: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2180a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2180a8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2180a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2180ac: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2180acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2180b0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2180b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2180b4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2180b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2180b8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2180b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2180bc: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x2180bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2180c0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2180c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2180c4: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2180c4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2180c8: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x2180c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x2180cc: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x2180ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2180d0: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x2180d0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x2180d4: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x2180d4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2180d8: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x2180d8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x2180dc: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x2180dcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x2180e0: 0x46057034  c.lt.s      $f14, $f5
    ctx->pc = 0x2180e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2180e4: 0x0  nop
    ctx->pc = 0x2180e4u;
    // NOP
    // 0x2180e8: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x2180E8u;
    {
        const bool branch_taken_0x2180e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2180ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180E8u;
        // 0x2180ec: 0xe7a40038  swc1        $f4, 0x38($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2180e8) {
            ctx->pc = 0x2181E8u;
            goto label_2181e8;
        }
    }
    ctx->pc = 0x2180F0u;
    // 0x2180f0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2180f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2180f4: 0xc5240000  lwc1        $f4, 0x0($t1)
    ctx->pc = 0x2180f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2180f8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2180f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2180fc: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2180fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x218100: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x218100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218104: 0xc5260004  lwc1        $f6, 0x4($t1)
    ctx->pc = 0x218104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x218108: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x218108u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x21810c: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x21810cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x218110: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x218110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x218114: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x218114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218118: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x218118u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21811c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x21811cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x218120: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x218120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x218124: 0x46055141  sub.s       $f5, $f10, $f5
    ctx->pc = 0x218124u;
    ctx->f[5] = FPU_SUB_S(ctx->f[10], ctx->f[5]);
    // 0x218128: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x218128u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21812c: 0xc4a80004  lwc1        $f8, 0x4($a1)
    ctx->pc = 0x21812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x218130: 0x46084a01  sub.s       $f8, $f9, $f8
    ctx->pc = 0x218130u;
    ctx->f[8] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
    // 0x218134: 0xe7a80044  swc1        $f8, 0x44($sp)
    ctx->pc = 0x218134u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x218138: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x218138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x21813c: 0x460759c1  sub.s       $f7, $f11, $f7
    ctx->pc = 0x21813cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[11], ctx->f[7]);
    // 0x218140: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x218140u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x218144: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x218144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x218148: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x218148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21814c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x21814cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x218150: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x218150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x218154: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x218154u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x218158: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x218158u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x21815c: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x21815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218160: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x218160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218164: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x218164u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x218168: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x218168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x21816c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x21816cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x218170: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x218170u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x218174: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x218174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218178: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x218178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21817c: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x21817cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x218180: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x218180u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x218184: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x218184u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x218188: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x218188u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x21818c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21818cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218190: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x218190u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x218194: 0x460439c2  mul.s       $f7, $f7, $f4
    ctx->pc = 0x218194u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x218198: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x218198u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x21819c: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x21819cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x2181a0: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x2181a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2181a4: 0x0  nop
    ctx->pc = 0x2181a4u;
    // NOP
    // 0x2181a8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2181A8u;
    {
        const bool branch_taken_0x2181a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2181ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181A8u;
        // 0x2181ac: 0xe7a40038  swc1        $f4, 0x38($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181a8) {
            ctx->pc = 0x2181E8u;
            goto label_2181e8;
        }
    }
    ctx->pc = 0x2181B0u;
    // 0x2181b0: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2181b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2181b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2181b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2181b8: 0x0  nop
    ctx->pc = 0x2181b8u;
    // NOP
    // 0x2181bc: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x2181BCu;
    {
        const bool branch_taken_0x2181bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2181bc) {
            ctx->pc = 0x2181C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2181BCu;
            // 0x2181c0: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2181ECu;
            goto label_2181ec;
        }
    }
    ctx->pc = 0x2181C4u;
    // 0x2181c4: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x2181c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2181c8: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x2181c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2181cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2181ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2181d0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2181d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2181d4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2181d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2181d8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2181d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2181dc: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x2181dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x2181e0: 0xe0782d  daddu       $t7, $a3, $zero
    ctx->pc = 0x2181e0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181e4: 0x160702d  daddu       $t6, $t3, $zero
    ctx->pc = 0x2181e4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2181e8:
    // 0x2181e8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x2181e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_2181ec:
    // 0x2181ec: 0x11800007  beqz        $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x2181ECu;
    {
        const bool branch_taken_0x2181ec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x2181ec) {
            ctx->pc = 0x21820Cu;
            goto label_21820c;
        }
    }
    ctx->pc = 0x2181F4u;
    // 0x2181f4: 0x95ab0000  lhu         $t3, 0x0($t5)
    ctx->pc = 0x2181f4u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2181f8: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x2181f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2181fc: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x2181fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x218200: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x218200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x218204: 0x1d80ff00  bgtz        $t4, . + 4 + (-0x100 << 2)
    ctx->pc = 0x218204u;
    {
        const bool branch_taken_0x218204 = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x218208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218204u;
        // 0x218208: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218204) {
            ctx->pc = 0x217E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217e08;
        }
    }
    ctx->pc = 0x21820Cu;
label_21820c:
    // 0x21820c: 0x11e0002e  beqz        $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x21820Cu;
    {
        const bool branch_taken_0x21820c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x218210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21820Cu;
        // 0x218210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21820c) {
            ctx->pc = 0x2182C8u;
            goto label_2182c8;
        }
    }
    ctx->pc = 0x218214u;
    // 0x218214: 0x8d420030  lw          $v0, 0x30($t2)
    ctx->pc = 0x218214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x218218: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x218218u;
    {
        const bool branch_taken_0x218218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218218) {
            ctx->pc = 0x21821Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218218u;
            // 0x21821c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2182C8u;
            goto label_2182c8;
        }
    }
    ctx->pc = 0x218220u;
    // 0x218220: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x218220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x218224: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x218224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x218228: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x218228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21822c: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x21822cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218230: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x218230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218234: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x218234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x218238: 0x8d430030  lw          $v1, 0x30($t2)
    ctx->pc = 0x218238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x21823c: 0xac6e000c  sw          $t6, 0xC($v1)
    ctx->pc = 0x21823cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 14));
    // 0x218240: 0x95e20006  lhu         $v0, 0x6($t7)
    ctx->pc = 0x218240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 6)));
    // 0x218244: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x218244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x218248: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x218248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x21824c: 0x8d440030  lw          $a0, 0x30($t2)
    ctx->pc = 0x21824cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x218250: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x218250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x218254: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218258: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x218258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x21825c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x21825cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x218260: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x218260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x218264: 0xb0850017  sdl         $a1, 0x17($a0)
    ctx->pc = 0x218264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x218268: 0xb4850010  sdr         $a1, 0x10($a0)
    ctx->pc = 0x218268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21826c: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x21826cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x218270: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x218270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218274: 0x8d420030  lw          $v0, 0x30($t2)
    ctx->pc = 0x218274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x218278: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x218278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x21827c: 0x8d430018  lw          $v1, 0x18($t2)
    ctx->pc = 0x21827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x218280: 0x1c3102a  slt         $v0, $t6, $v1
    ctx->pc = 0x218280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x218284: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x218284u;
    {
        const bool branch_taken_0x218284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218284) {
            ctx->pc = 0x218288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218284u;
            // 0x218288: 0x1c31023  subu        $v0, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2182A0u;
            goto label_2182a0;
        }
    }
    ctx->pc = 0x21828Cu;
    // 0x21828c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x21828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x218290: 0xe1900  sll         $v1, $t6, 4
    ctx->pc = 0x218290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x218294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x218298u;
    {
        const bool branch_taken_0x218298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218298u;
        // 0x21829c: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218298) {
            ctx->pc = 0x2182ACu;
            goto label_2182ac;
        }
    }
    ctx->pc = 0x2182A0u;
label_2182a0:
    // 0x2182a0: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x2182a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2182a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2182a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2182a8: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2182a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2182ac:
    // 0x2182ac: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2182acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2182b0: 0x8d430030  lw          $v1, 0x30($t2)
    ctx->pc = 0x2182b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x2182b4: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x2182b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x2182b8: 0x8d440030  lw          $a0, 0x30($t2)
    ctx->pc = 0x2182b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x2182bc: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2182bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2182c0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x2182c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x2182c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2182c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2182c8:
    // 0x2182c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2182c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2182cc:
    // 0x2182cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2182CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2182D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2182CCu;
        // 0x2182d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2182CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2182D4u;
    // 0x2182d4: 0x0  nop
    ctx->pc = 0x2182d4u;
    // NOP
    ctx->pc = 0x2182d8u;
}
