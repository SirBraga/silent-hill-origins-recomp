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

// Function: sub_002E7DF0
// Address: 0x2e7df0 - 0x2e7f28
void sub_002E7DF0_0x2e7df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7DF0_0x2e7df0");
#endif

    switch (ctx->pc) {
        case 0x2e7e38u: goto label_2e7e38;
        case 0x2e7e78u: goto label_2e7e78;
        case 0x2e7ed8u: goto label_2e7ed8;
        default: break;
    }

    ctx->pc = 0x2e7df0u;

    // 0x2e7df0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e7df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e7df4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e7df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2e7df8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2e7dfc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e7dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e7e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2e7e04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e7e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e7e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e7e0c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2e7e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e10: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2e7e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2e7e14: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x2e7e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e7e1c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e7e1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e20: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e7e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e7e24: 0x129980b  movn        $s3, $t1, $t1
    ctx->pc = 0x2e7e24u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 9));
    // 0x2e7e28: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2e7e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e7e2c: 0x24a5f100  addiu       $a1, $a1, -0xF00
    ctx->pc = 0x2e7e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963456));
    // 0x2e7e30: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2E7E30u;
    SET_GPR_U32(ctx, 31, 0x2E7E38u);
    ctx->pc = 0x2E7E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E30u;
    // 0x2e7e34: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2E7E30u, 0x2E7E38u)) {
        return;
    }
    ctx->pc = 0x2E7E38u;
label_2e7e38:
    // 0x2e7e38: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E7E38u;
    {
        const bool branch_taken_0x2e7e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E38u;
        // 0x2e7e3c: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e38) {
            ctx->pc = 0x2E7EA8u;
            goto label_2e7ea8;
        }
    }
    ctx->pc = 0x2E7E40u;
    // 0x2e7e40: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2e7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2e7e44: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x2e7e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e7e48: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2e7e48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2e7e4c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2e7e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e7e50: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x2e7e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2e7e54: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2e7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e7e58: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E7E58u;
    {
        const bool branch_taken_0x2e7e58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E58u;
        // 0x2e7e5c: 0x24882  srl         $t1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e58) {
            ctx->pc = 0x2E7F00u;
            goto label_2e7f00;
        }
    }
    ctx->pc = 0x2E7E60u;
    // 0x2e7e60: 0x11200027  beqz        $t1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E7E60u;
    {
        const bool branch_taken_0x2e7e60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E60u;
        // 0x2e7e64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e60) {
            ctx->pc = 0x2E7F00u;
            goto label_2e7f00;
        }
    }
    ctx->pc = 0x2E7E68u;
    // 0x2e7e68: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x2e7e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x2e7e6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e7e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7e70: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2e7e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e74: 0x0  nop
    ctx->pc = 0x2e7e74u;
    // NOP
label_2e7e78:
    // 0x2e7e78: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x2e7e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e7e7c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e7e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e7e80: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2e7e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2e7e84: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x2e7e84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e7e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7e8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e7e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e7e90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7e94: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2e7e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2e7e98: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E7E98u;
    {
        const bool branch_taken_0x2e7e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E98u;
        // 0x2e7e9c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e98) {
            ctx->pc = 0x2E7E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7e78;
        }
    }
    ctx->pc = 0x2E7EA0u;
    // 0x2e7ea0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E7EA0u;
    {
        const bool branch_taken_0x2e7ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EA0u;
        // 0x2e7ea4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ea0) {
            ctx->pc = 0x2E7F04u;
            goto label_2e7f04;
        }
    }
    ctx->pc = 0x2E7EA8u;
label_2e7ea8:
    // 0x2e7ea8: 0x101042  srl         $v0, $s0, 1
    ctx->pc = 0x2e7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2e7eac: 0x2424021  addu        $t0, $s2, $v0
    ctx->pc = 0x2e7eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e7eb0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2e7eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2e7eb4: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2e7eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2e7eb8: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x2e7eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2e7ebc: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2e7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e7ec0: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2E7EC0u;
    {
        const bool branch_taken_0x2e7ec0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EC0u;
        // 0x2e7ec4: 0x24842  srl         $t1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ec0) {
            ctx->pc = 0x2E7F00u;
            goto label_2e7f00;
        }
    }
    ctx->pc = 0x2E7EC8u;
    // 0x2e7ec8: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E7EC8u;
    {
        const bool branch_taken_0x2e7ec8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EC8u;
        // 0x2e7ecc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ec8) {
            ctx->pc = 0x2E7F00u;
            goto label_2e7f00;
        }
    }
    ctx->pc = 0x2E7ED0u;
    // 0x2e7ed0: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x2e7ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x2e7ed4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e7ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e7ed8:
    // 0x2e7ed8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2e7ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7edc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2e7edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e7ee0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e7ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2e7ee4: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x2e7ee4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2e7ee8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e7ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e7eec: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e7eecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e7ef0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2e7ef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e7ef4: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x2e7ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e7ef8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E7EF8u;
    {
        const bool branch_taken_0x2e7ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7EF8u;
        // 0x2e7efc: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ef8) {
            ctx->pc = 0x2E7ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7ed8;
        }
    }
    ctx->pc = 0x2E7F00u;
label_2e7f00:
    // 0x2e7f00: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e7f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e7f04:
    // 0x2e7f04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e7f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7f08: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e7f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7f0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e7f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7f10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e7f10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7f14: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2e7f14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7F1Cu;
        // 0x2e7f20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7F24u;
    // 0x2e7f24: 0x0  nop
    ctx->pc = 0x2e7f24u;
    // NOP
    ctx->pc = 0x2e7f28u;
}
