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

// Function: sub_00184E50
// Address: 0x184e50 - 0x185090
void sub_00184E50_0x184e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184E50_0x184e50");
#endif

    switch (ctx->pc) {
        case 0x184f08u: goto label_184f08;
        case 0x184f18u: goto label_184f18;
        case 0x184f48u: goto label_184f48;
        case 0x184f78u: goto label_184f78;
        case 0x184f98u: goto label_184f98;
        default: break;
    }

    ctx->pc = 0x184e50u;

    // 0x184e50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x184e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x184e54: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x184e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x184e58: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x184e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x184e5c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x184e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x184e60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x184e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x184e64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x184e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e68: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x184e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x184e6c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x184e6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e70: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x184e70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x184e74: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x184e74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e78: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x184e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x184e7c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x184e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x184e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184e84: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x184e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x184e88: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x184e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184e8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x184e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x184e90: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x184E90u;
    {
        const bool branch_taken_0x184e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E90u;
        // 0x184e94: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e90) {
            ctx->pc = 0x184ED4u;
            goto label_184ed4;
        }
    }
    ctx->pc = 0x184E98u;
    // 0x184e98: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x184e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x184e9c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x184e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x184ea0: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x184ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x184ea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x184ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x184ea8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x184ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x184eac: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x184eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x184eb0: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x184eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x184eb4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x184eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x184eb8: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x184eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
    // 0x184ebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x184ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x184ec0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x184ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x184ec4: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x184ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x184ec8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x184ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x184ecc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x184eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x184ed0: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x184ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_184ed4:
    // 0x184ed4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x184ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x184ed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184edc: 0xe6540050  swc1        $f20, 0x50($s2)
    ctx->pc = 0x184edcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x184ee0: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x184ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x184ee4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x184ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x184ee8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x184ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184eec: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x184eecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184ef0: 0x0  nop
    ctx->pc = 0x184ef0u;
    // NOP
    // 0x184ef4: 0x45020033  bc1fl       . + 4 + (0x33 << 2)
    ctx->pc = 0x184EF4u;
    {
        const bool branch_taken_0x184ef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184ef4) {
            ctx->pc = 0x184EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184EF4u;
            // 0x184ef8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184FC4u;
            goto label_184fc4;
        }
    }
    ctx->pc = 0x184EFCu;
    // 0x184efc: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x184efcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x184f00: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x184f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x184f04: 0x0  nop
    ctx->pc = 0x184f04u;
    // NOP
label_184f08:
    // 0x184f08: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x184f08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184f0c: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x184f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x184f10: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x184F10u;
    {
        const bool branch_taken_0x184f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F10u;
        // 0x184f14: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f10) {
            ctx->pc = 0x184F44u;
            goto label_184f44;
        }
    }
    ctx->pc = 0x184F18u;
label_184f18:
    // 0x184f18: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x184f18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x184f1c: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x184f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x184f20: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x184f20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x184f24: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x184F24u;
    {
        const bool branch_taken_0x184f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x184F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F24u;
        // 0x184f28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f24) {
            ctx->pc = 0x184F48u;
            goto label_184f48;
        }
    }
    ctx->pc = 0x184F2Cu;
    // 0x184f2c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x184f2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184f30: 0x10470009  beq         $v0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x184F30u;
    {
        const bool branch_taken_0x184f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x184F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F30u;
        // 0x184f34: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f30) {
            ctx->pc = 0x184F58u;
            goto label_184f58;
        }
    }
    ctx->pc = 0x184F38u;
    // 0x184f38: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x184f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x184f3c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x184F3Cu;
    {
        const bool branch_taken_0x184f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F3Cu;
        // 0x184f40: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f3c) {
            ctx->pc = 0x184F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184f18;
        }
    }
    ctx->pc = 0x184F44u;
label_184f44:
    // 0x184f44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x184f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184f48:
    // 0x184f48: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x184F48u;
    {
        const bool branch_taken_0x184f48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x184f48) {
            ctx->pc = 0x184F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184F48u;
            // 0x184f4c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184F6Cu;
            goto label_184f6c;
        }
    }
    ctx->pc = 0x184F50u;
    // 0x184f50: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x184F50u;
    {
        const bool branch_taken_0x184f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F50u;
        // 0x184f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f50) {
            ctx->pc = 0x184FA0u;
            goto label_184fa0;
        }
    }
    ctx->pc = 0x184F58u;
label_184f58:
    // 0x184f58: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x184f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x184f5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x184f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x184f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x184f64: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x184F64u;
    {
        const bool branch_taken_0x184f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184F64u;
        // 0x184f68: 0xae420038  sw          $v0, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f64) {
            ctx->pc = 0x184F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184f48;
        }
    }
    ctx->pc = 0x184F6Cu;
label_184f6c:
    // 0x184f6c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x184f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x184f70: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x184F70u;
    SET_GPR_U32(ctx, 31, 0x184F78u);
    ctx->pc = 0x184F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184F70u;
    // 0x184f74: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x184F70u, 0x184F78u)) {
        return;
    }
    ctx->pc = 0x184F78u;
label_184f78:
    // 0x184f78: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x184f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x184f7c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x184f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x184f80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x184f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x184f84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x184f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x184f88: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x184f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x184f8c: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x184f8cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x184f90: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x184F90u;
    SET_GPR_U32(ctx, 31, 0x184F98u);
    ctx->pc = 0x184F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184F90u;
    // 0x184f94: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x184F90u, 0x184F98u)) {
        return;
    }
    ctx->pc = 0x184F98u;
label_184f98:
    // 0x184f98: 0xa6350000  sh          $s5, 0x0($s1)
    ctx->pc = 0x184f98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x184f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184fa0:
    // 0x184fa0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x184FA0u;
    {
        const bool branch_taken_0x184fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184fa0) {
            ctx->pc = 0x184FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184FA0u;
            // 0x184fa4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184FC4u;
            goto label_184fc4;
        }
    }
    ctx->pc = 0x184FA8u;
    // 0x184fa8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x184fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x184fac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x184facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184fb0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x184fb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184fb4: 0x0  nop
    ctx->pc = 0x184fb4u;
    // NOP
    // 0x184fb8: 0x4503ffd3  bc1tl       . + 4 + (-0x2D << 2)
    ctx->pc = 0x184FB8u;
    {
        const bool branch_taken_0x184fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x184fb8) {
            ctx->pc = 0x184FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184FB8u;
            // 0x184fbc: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184f08;
        }
    }
    ctx->pc = 0x184FC0u;
    // 0x184fc0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x184fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_184fc4:
    // 0x184fc4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x184fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x184fc8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x184fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184fcc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x184fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184fd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x184fd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184fd4: 0x0  nop
    ctx->pc = 0x184fd4u;
    // NOP
    // 0x184fd8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x184FD8u;
    {
        const bool branch_taken_0x184fd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184fd8) {
            ctx->pc = 0x184FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184FD8u;
            // 0x184fdc: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184FF4u;
            goto label_184ff4;
        }
    }
    ctx->pc = 0x184FE0u;
    // 0x184fe0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x184fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184fe4: 0x0  nop
    ctx->pc = 0x184fe4u;
    // NOP
    // 0x184fe8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x184FE8u;
    {
        const bool branch_taken_0x184fe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x184fe8) {
            ctx->pc = 0x184FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184FE8u;
            // 0x184fec: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184FF0u;
            goto label_184ff0;
        }
    }
    ctx->pc = 0x184FF0u;
label_184ff0:
    // 0x184ff0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x184ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_184ff4:
    // 0x184ff4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x184ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x184ff8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x184ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184ffc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x184ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185004: 0x0  nop
    ctx->pc = 0x185004u;
    // NOP
    // 0x185008: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x185008u;
    {
        const bool branch_taken_0x185008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185008) {
            ctx->pc = 0x18500Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185008u;
            // 0x18500c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185028u;
            goto label_185028;
        }
    }
    ctx->pc = 0x185010u;
    // 0x185010: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x185010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185014: 0x0  nop
    ctx->pc = 0x185014u;
    // NOP
    // 0x185018: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x185018u;
    {
        const bool branch_taken_0x185018 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185018) {
            ctx->pc = 0x18501Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185018u;
            // 0x18501c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185024u;
            goto label_185024;
        }
    }
    ctx->pc = 0x185020u;
    // 0x185020: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x185020u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_185024:
    // 0x185024: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x185024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_185028:
    // 0x185028: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x185028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18502c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x18502cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185030: 0x0  nop
    ctx->pc = 0x185030u;
    // NOP
    // 0x185034: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x185034u;
    {
        const bool branch_taken_0x185034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185034u;
        // 0x185038: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185034) {
            ctx->pc = 0x185064u;
            goto label_185064;
        }
    }
    ctx->pc = 0x18503Cu;
    // 0x18503c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x18503cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x185040: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x185040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x185044: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x185044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185048: 0x0  nop
    ctx->pc = 0x185048u;
    // NOP
    // 0x18504c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18504cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185050: 0x0  nop
    ctx->pc = 0x185050u;
    // NOP
    // 0x185054: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x185054u;
    {
        const bool branch_taken_0x185054 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185054u;
        // 0x185058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185054) {
            ctx->pc = 0x185064u;
            goto label_185064;
        }
    }
    ctx->pc = 0x18505Cu;
    // 0x18505c: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x18505cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x185060: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x185060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_185064:
    // 0x185064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185068: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x185068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18506c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18506cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185070: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x185070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185074: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x185074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185078: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x185078u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18507c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18507cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185080: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x185080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x185084: 0x3e00008  jr          $ra
    ctx->pc = 0x185084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185084u;
        // 0x185088: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18508Cu;
    // 0x18508c: 0x0  nop
    ctx->pc = 0x18508cu;
    // NOP
    ctx->pc = 0x185090u;
}
