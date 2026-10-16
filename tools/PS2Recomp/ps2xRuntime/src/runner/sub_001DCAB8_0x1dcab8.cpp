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

// Function: sub_001DCAB8
// Address: 0x1dcab8 - 0x1dcc38
void sub_001DCAB8_0x1dcab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCAB8_0x1dcab8");
#endif

    switch (ctx->pc) {
        case 0x1dcb08u: goto label_1dcb08;
        case 0x1dcb70u: goto label_1dcb70;
        case 0x1dcbe0u: goto label_1dcbe0;
        case 0x1dcbf8u: goto label_1dcbf8;
        default: break;
    }

    ctx->pc = 0x1dcab8u;

    // 0x1dcab8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dcab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1dcabc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dcabcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dcac0: 0x8c44e668  lw          $a0, -0x1998($v0)
    ctx->pc = 0x1dcac0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33E668u));
    // 0x1dcac4: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x1dcac4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcac8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dcac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dcacc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dcaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dcad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dcad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dcad4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dcad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dcad8: 0x1080004f  beqz        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1DCAD8u;
    {
        const bool branch_taken_0x1dcad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAD8u;
        // 0x1dcadc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcad8) {
            ctx->pc = 0x1DCC18u;
            goto label_1dcc18;
        }
    }
    ctx->pc = 0x1DCAE0u;
    // 0x1dcae0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1dcae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1dcae4: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1dcae4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x1dcae8: 0x8c430fc8  lw          $v1, 0xFC8($v0)
    ctx->pc = 0x1dcae8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x730FC8u));
    // 0x1dcaec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1dcaecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcaf0: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x1dcaf0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcaf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dcaf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcaf8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dcaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dcafc: 0x24480030  addiu       $t0, $v0, 0x30
    ctx->pc = 0x1dcafcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dcb00: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x1dcb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcb04: 0x0  nop
    ctx->pc = 0x1dcb04u;
    // NOP
label_1dcb08:
    // 0x1dcb08: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x1dcb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcb0c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x1dcb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcb10: 0xc4840030  lwc1        $f4, 0x30($a0)
    ctx->pc = 0x1dcb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dcb14: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1dcb14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1dcb18: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x1dcb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcb1c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1dcb1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1dcb20: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1dcb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcb24: 0x8ce3e664  lw          $v1, -0x199C($a3)
    ctx->pc = 0x1dcb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960740)));
    // 0x1dcb28: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1dcb28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1dcb2c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1dcb2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1dcb30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1dcb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dcb34: 0x8c6a0020  lw          $t2, 0x20($v1)
    ctx->pc = 0x1dcb34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dcb38: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1dcb38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1dcb3c: 0xe4630028  swc1        $f3, 0x28($v1)
    ctx->pc = 0x1dcb3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1dcb40: 0x8ce2e664  lw          $v0, -0x199C($a3)
    ctx->pc = 0x1dcb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960740)));
    // 0x1dcb44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1dcb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dcb48: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1dcb48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1dcb4c: 0x8ce3e664  lw          $v1, -0x199C($a3)
    ctx->pc = 0x1dcb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960740)));
    // 0x1dcb50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1dcb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dcb54: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCB54u;
    {
        const bool branch_taken_0x1dcb54 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB54u;
        // 0x1dcb58: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb54) {
            ctx->pc = 0x1DCB64u;
            goto label_1dcb64;
        }
    }
    ctx->pc = 0x1DCB5Cu;
    // 0x1dcb5c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1DCB5Cu;
    {
        const bool branch_taken_0x1dcb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB5Cu;
        // 0x1dcb60: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb5c) {
            ctx->pc = 0x1DCBBCu;
            goto label_1dcbbc;
        }
    }
    ctx->pc = 0x1DCB64u;
label_1dcb64:
    // 0x1dcb64: 0x8d66e664  lw          $a2, -0x199C($t3)
    ctx->pc = 0x1dcb64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294960740)));
    // 0x1dcb68: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x1dcb68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dcb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb70:
    // 0x1dcb70: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1dcb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1dcb74: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1dcb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcb78: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1dcb78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcb7c: 0x0  nop
    ctx->pc = 0x1dcb7cu;
    // NOP
    // 0x1dcb80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCB80u;
    {
        const bool branch_taken_0x1dcb80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB80u;
        // 0x1dcb84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb80) {
            ctx->pc = 0x1DCB90u;
            goto label_1dcb90;
        }
    }
    ctx->pc = 0x1DCB88u;
    // 0x1dcb88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCB88u;
    {
        const bool branch_taken_0x1dcb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB88u;
        // 0x1dcb8c: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb88) {
            ctx->pc = 0x1DCB98u;
            goto label_1dcb98;
        }
    }
    ctx->pc = 0x1DCB90u;
label_1dcb90:
    // 0x1dcb90: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1dcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1dcb94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dcb94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb98:
    // 0x1dcb98: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DCB98u;
    {
        const bool branch_taken_0x1dcb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcb98) {
            ctx->pc = 0x1DCB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCB98u;
            // 0x1dcb9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcb70;
        }
    }
    ctx->pc = 0x1DCBA0u;
    // 0x1dcba0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCBA0u;
    {
        const bool branch_taken_0x1dcba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBA0u;
        // 0x1dcba4: 0x8ce2e664  lw          $v0, -0x199C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcba0) {
            ctx->pc = 0x1DCBB4u;
            goto label_1dcbb4;
        }
    }
    ctx->pc = 0x1DCBA8u;
    // 0x1dcba8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1dcba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dcbac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCBACu;
    {
        const bool branch_taken_0x1dcbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBACu;
        // 0x1dcbb0: 0xac440020  sw          $a0, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbac) {
            ctx->pc = 0x1DCBBCu;
            goto label_1dcbbc;
        }
    }
    ctx->pc = 0x1DCBB4u;
label_1dcbb4:
    // 0x1dcbb4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1dcbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dcbb8: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x1dcbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
label_1dcbbc:
    // 0x1dcbbc: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1dcbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc0: 0x5480ffd1  bnel        $a0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1DCBC0u;
    {
        const bool branch_taken_0x1dcbc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcbc0) {
            ctx->pc = 0x1DCBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCBC0u;
            // 0x1dcbc4: 0xc480002c  lwc1        $f0, 0x2C($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcb08;
        }
    }
    ctx->pc = 0x1DCBC8u;
    // 0x1dcbc8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1dcbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbcc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DCBCCu;
    {
        const bool branch_taken_0x1dcbcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBCCu;
        // 0x1dcbd0: 0xad80e668  sw          $zero, -0x1998($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4294960744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbcc) {
            ctx->pc = 0x1DCC18u;
            goto label_1dcc18;
        }
    }
    ctx->pc = 0x1DCBD4u;
    // 0x1dcbd4: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x1dcbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbd8: 0x8e62e664  lw          $v0, -0x199C($s3)
    ctx->pc = 0x1dcbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960740)));
    // 0x1dcbdc: 0x0  nop
    ctx->pc = 0x1dcbdcu;
    // NOP
label_1dcbe0:
    // 0x1dcbe0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dcbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dcbe4: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1dcbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1dcbe8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCBE8u;
    {
        const bool branch_taken_0x1dcbe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBE8u;
        // 0x1dcbec: 0x8c510024  lw          $s1, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbe8) {
            ctx->pc = 0x1DCBF8u;
            goto label_1dcbf8;
        }
    }
    ctx->pc = 0x1DCBF0u;
    // 0x1dcbf0: 0xc07752a  jal         func_1DD4A8
    ctx->pc = 0x1DCBF0u;
    SET_GPR_U32(ctx, 31, 0x1DCBF8u);
    ctx->pc = 0x1DD4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DD4A8u, 0x1DCBF0u, 0x1DCBF8u)) {
        return;
    }
    ctx->pc = 0x1DCBF8u;
label_1dcbf8:
    // 0x1dcbf8: 0x8e62e664  lw          $v0, -0x199C($s3)
    ctx->pc = 0x1dcbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960740)));
    // 0x1dcbfc: 0x8e43e668  lw          $v1, -0x1998($s2)
    ctx->pc = 0x1dcbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960744)));
    // 0x1dcc00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dcc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dcc04: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1dcc04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1dcc08: 0xae50e668  sw          $s0, -0x1998($s2)
    ctx->pc = 0x1dcc08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960744), GPR_U32(ctx, 16));
    // 0x1dcc0c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1dcc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc10: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DCC10u;
    {
        const bool branch_taken_0x1dcc10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC10u;
        // 0x1dcc14: 0x8e62e664  lw          $v0, -0x199C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc10) {
            ctx->pc = 0x1DCBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcbe0;
        }
    }
    ctx->pc = 0x1DCC18u;
label_1dcc18:
    // 0x1dcc18: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dcc18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcc1c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dcc1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dcc20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dcc20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcc24: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dcc24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcc28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC2Cu;
        // 0x1dcc30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC34u;
    // 0x1dcc34: 0x0  nop
    ctx->pc = 0x1dcc34u;
    // NOP
    ctx->pc = 0x1dcc38u;
}
