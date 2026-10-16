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

// Function: sub_00216A80
// Address: 0x216a80 - 0x216c70
void sub_00216A80_0x216a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216A80_0x216a80");
#endif

    switch (ctx->pc) {
        case 0x216b60u: goto label_216b60;
        case 0x216b98u: goto label_216b98;
        case 0x216be8u: goto label_216be8;
        case 0x216c40u: goto label_216c40;
        default: break;
    }

    ctx->pc = 0x216a80u;

    // 0x216a80: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x216a80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
    // 0x216a84: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x216a84u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a88: 0xc4c002b0  lwc1        $f0, 0x2B0($a2)
    ctx->pc = 0x216a88u;
    { uint32_t bits = FAST_READ32(0x5C02B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216a8c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x216a8cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216a94: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x216a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x216a98: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x216a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x216a9c: 0x8d840008  lw          $a0, 0x8($t4)
    ctx->pc = 0x216a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x216aa0: 0x0  nop
    ctx->pc = 0x216aa0u;
    // NOP
    // 0x216aa4: 0x0  nop
    ctx->pc = 0x216aa4u;
    // NOP
    // 0x216aa8: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x216aa8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[0]);
    // 0x216aac: 0x80820006  lb          $v0, 0x6($a0)
    ctx->pc = 0x216aacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x216ab0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x216ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216ab4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x216ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x216ab8: 0x0  nop
    ctx->pc = 0x216ab8u;
    // NOP
    // 0x216abc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x216abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x216ac0: 0x80830007  lb          $v1, 0x7($a0)
    ctx->pc = 0x216ac0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x216ac4: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x216ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216ac8: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x216ac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x216acc: 0x0  nop
    ctx->pc = 0x216accu;
    // NOP
    // 0x216ad0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x216ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x216ad4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x216ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x216ad8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x216ad8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x216adc: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x216adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x216ae0: 0xc4a002b4  lwc1        $f0, 0x2B4($a1)
    ctx->pc = 0x216ae0u;
    { uint32_t bits = FAST_READ32(0x5C02B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216ae4: 0x0  nop
    ctx->pc = 0x216ae4u;
    // NOP
    // 0x216ae8: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x216ae8u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[0]);
    // 0x216aec: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x216aecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x216af0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x216af0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x216af4: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x216af4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x216af8: 0xc4c002b0  lwc1        $f0, 0x2B0($a2)
    ctx->pc = 0x216af8u;
    { uint32_t bits = FAST_READ32(0x5C02B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216afc: 0x95850004  lhu         $a1, 0x4($t4)
    ctx->pc = 0x216afcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x216b00: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x216b00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x216b04: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x216b04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x216b08: 0x8d84000c  lw          $a0, 0xC($t4)
    ctx->pc = 0x216b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x216b0c: 0x95820002  lhu         $v0, 0x2($t4)
    ctx->pc = 0x216b0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x216b10: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x216b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x216b14: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x216b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x216b18: 0x8dc60290  lw          $a2, 0x290($t6)
    ctx->pc = 0x216b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 656)));
    // 0x216b1c: 0x35042  srl         $t2, $v1, 1
    ctx->pc = 0x216b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x216b20: 0x8dc70294  lw          $a3, 0x294($t6)
    ctx->pc = 0x216b20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 660)));
    // 0x216b24: 0x8ccb0018  lw          $t3, 0x18($a2)
    ctx->pc = 0x216b24u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x216b28: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x216b28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b2c: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x216b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x216b30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x216b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x216b34: 0x8486000c  lh          $a2, 0xC($a0)
    ctx->pc = 0x216b34u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x216b38: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x216b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x216b3c: 0x16a5823  subu        $t3, $t3, $t2
    ctx->pc = 0x216b3cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x216b40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216b44: 0x1266821  addu        $t5, $t1, $a2
    ctx->pc = 0x216b44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x216b48: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x216b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x216b4c: 0x112d0034  beq         $t1, $t5, . + 4 + (0x34 << 2)
    ctx->pc = 0x216B4Cu;
    {
        const bool branch_taken_0x216b4c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 13));
        ctx->pc = 0x216B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B4Cu;
        // 0x216b50: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b4c) {
            ctx->pc = 0x216C20u;
            goto label_216c20;
        }
    }
    ctx->pc = 0x216B54u;
    // 0x216b54: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x216b54u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216b58: 0x3c0fff00  lui         $t7, 0xFF00
    ctx->pc = 0x216b58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65280 << 16));
    // 0x216b5c: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x216b5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_216b60:
    // 0x216b60: 0x4410019  bgez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x216B60u;
    {
        const bool branch_taken_0x216b60 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x216B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B60u;
        // 0x216b64: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b60) {
            ctx->pc = 0x216BC8u;
            goto label_216bc8;
        }
    }
    ctx->pc = 0x216B68u;
    // 0x216b68: 0x21023  negu        $v0, $v0
    ctx->pc = 0x216b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x216b6c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x216b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x216b70: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x216b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x216b74: 0x81240000  lb          $a0, 0x0($t1)
    ctx->pc = 0x216b74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x216b78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216b7c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x216b7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x216b80: 0x10580025  beq         $v0, $t8, . + 4 + (0x25 << 2)
    ctx->pc = 0x216B80u;
    {
        const bool branch_taken_0x216b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 24));
        ctx->pc = 0x216B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B80u;
        // 0x216b84: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b80) {
            ctx->pc = 0x216C18u;
            goto label_216c18;
        }
    }
    ctx->pc = 0x216B88u;
    // 0x216b88: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x216b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x216b8c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x216b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216b90: 0x4f1821  addu        $v1, $v0, $t7
    ctx->pc = 0x216b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x216b94: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x216b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_216b98:
    // 0x216b98: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x216b98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x216b9c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x216b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x216ba0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216BA0u;
    {
        const bool branch_taken_0x216ba0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x216BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BA0u;
        // 0x216ba4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ba0) {
            ctx->pc = 0x216BB0u;
            goto label_216bb0;
        }
    }
    ctx->pc = 0x216BA8u;
    // 0x216ba8: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x216ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x216bac: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x216bacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_216bb0:
    // 0x216bb0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x216bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216bb4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x216bb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x216bb8: 0x1446fff7  bne         $v0, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x216BB8u;
    {
        const bool branch_taken_0x216bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x216BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BB8u;
        // 0x216bbc: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bb8) {
            ctx->pc = 0x216B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216b98;
        }
    }
    ctx->pc = 0x216BC0u;
    // 0x216bc0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x216BC0u;
    {
        const bool branch_taken_0x216bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216bc0) {
            ctx->pc = 0x216C18u;
            goto label_216c18;
        }
    }
    ctx->pc = 0x216BC8u;
label_216bc8:
    // 0x216bc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x216bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x216bcc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x216bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x216bd0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x216bd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x216bd4: 0x10580010  beq         $v0, $t8, . + 4 + (0x10 << 2)
    ctx->pc = 0x216BD4u;
    {
        const bool branch_taken_0x216bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 24));
        ctx->pc = 0x216BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BD4u;
        // 0x216bd8: 0x21600  sll         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bd4) {
            ctx->pc = 0x216C18u;
            goto label_216c18;
        }
    }
    ctx->pc = 0x216BDCu;
    // 0x216bdc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x216bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216be0: 0x4f1821  addu        $v1, $v0, $t7
    ctx->pc = 0x216be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x216be4: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x216be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
label_216be8:
    // 0x216be8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x216be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x216bec: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x216becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x216bf0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x216bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x216bf4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x216bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x216bf8: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216BF8u;
    {
        const bool branch_taken_0x216bf8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x216BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BF8u;
        // 0x216bfc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bf8) {
            ctx->pc = 0x216C08u;
            goto label_216c08;
        }
    }
    ctx->pc = 0x216C00u;
    // 0x216c00: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x216c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x216c04: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x216c04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_216c08:
    // 0x216c08: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x216c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c0c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x216c0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x216c10: 0x1445fff5  bne         $v0, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x216C10u;
    {
        const bool branch_taken_0x216c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x216C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C10u;
        // 0x216c14: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c10) {
            ctx->pc = 0x216BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216be8;
        }
    }
    ctx->pc = 0x216C18u;
label_216c18:
    // 0x216c18: 0x552dffd1  bnel        $t1, $t5, . + 4 + (-0x2F << 2)
    ctx->pc = 0x216C18u;
    {
        const bool branch_taken_0x216c18 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 13));
        if (branch_taken_0x216c18) {
            ctx->pc = 0x216C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216C18u;
            // 0x216c1c: 0x81220000  lb          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216b60;
        }
    }
    ctx->pc = 0x216C20u;
label_216c20:
    // 0x216c20: 0x8dc20288  lw          $v0, 0x288($t6)
    ctx->pc = 0x216c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 648)));
    // 0x216c24: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x216C24u;
    {
        const bool branch_taken_0x216c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C24u;
        // 0x216c28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c24) {
            ctx->pc = 0x216C60u;
            goto label_216c60;
        }
    }
    ctx->pc = 0x216C2Cu;
    // 0x216c2c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x216c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x216c30: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x216C30u;
    {
        const bool branch_taken_0x216c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216c30) {
            ctx->pc = 0x216C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216C30u;
            // 0x216c34: 0xac6c0010  sw          $t4, 0x10($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216C64u;
            goto label_216c64;
        }
    }
    ctx->pc = 0x216C38u;
    // 0x216c38: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x216c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x216c3c: 0x0  nop
    ctx->pc = 0x216c3cu;
    // NOP
label_216c40:
    // 0x216c40: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x216c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x216c44: 0x0  nop
    ctx->pc = 0x216c44u;
    // NOP
    // 0x216c48: 0x0  nop
    ctx->pc = 0x216c48u;
    // NOP
    // 0x216c4c: 0x0  nop
    ctx->pc = 0x216c4cu;
    // NOP
    // 0x216c50: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x216C50u;
    {
        const bool branch_taken_0x216c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216c50) {
            ctx->pc = 0x216C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216C50u;
            // 0x216c54: 0x8c630010  lw          $v1, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216c40;
        }
    }
    ctx->pc = 0x216C58u;
    // 0x216c58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x216C58u;
    {
        const bool branch_taken_0x216c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C58u;
        // 0x216c5c: 0xac6c0010  sw          $t4, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c58) {
            ctx->pc = 0x216C64u;
            goto label_216c64;
        }
    }
    ctx->pc = 0x216C60u;
label_216c60:
    // 0x216c60: 0xadcc0288  sw          $t4, 0x288($t6)
    ctx->pc = 0x216c60u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 648), GPR_U32(ctx, 12));
label_216c64:
    // 0x216c64: 0x3e00008  jr          $ra
    ctx->pc = 0x216C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C64u;
        // 0x216c68: 0xad800010  sw          $zero, 0x10($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216C6Cu;
    // 0x216c6c: 0x0  nop
    ctx->pc = 0x216c6cu;
    // NOP
    ctx->pc = 0x216c70u;
}
