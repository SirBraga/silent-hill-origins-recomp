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

// Function: sub_0016D098
// Address: 0x16d098 - 0x16d218
void sub_0016D098_0x16d098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D098_0x16d098");
#endif

    switch (ctx->pc) {
        case 0x16d0e8u: goto label_16d0e8;
        case 0x16d0f0u: goto label_16d0f0;
        case 0x16d108u: goto label_16d108;
        case 0x16d16cu: goto label_16d16c;
        case 0x16d190u: goto label_16d190;
        case 0x16d1d8u: goto label_16d1d8;
        case 0x16d1f0u: goto label_16d1f0;
        default: break;
    }

    ctx->pc = 0x16d098u;

    // 0x16d098: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16d098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16d09c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x16d09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x16d0a0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16d0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x16d0a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16d0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d0a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16d0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16d0ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16d0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16d0b0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x16d0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x16d0b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d0b8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x16d0b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x16d0bc: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x16d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x16d0c0: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x16d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x16d0c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16d0c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D0C8u;
    {
        const bool branch_taken_0x16d0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0C8u;
        // 0x16d0cc: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0c8) {
            ctx->pc = 0x16D0F0u;
            goto label_16d0f0;
        }
    }
    ctx->pc = 0x16D0D0u;
    // 0x16d0d0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x16d0d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16d0d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D0D4u;
    {
        const bool branch_taken_0x16d0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0D4u;
        // 0x16d0d8: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0d4) {
            ctx->pc = 0x16D0F0u;
            goto label_16d0f0;
        }
    }
    ctx->pc = 0x16D0DCu;
    // 0x16d0dc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16d0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16d0e0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16D0E0u;
    SET_GPR_U32(ctx, 31, 0x16D0E8u);
    ctx->pc = 0x16D0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D0E0u;
    // 0x16d0e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16D0E0u, 0x16D0E8u)) {
        return;
    }
    ctx->pc = 0x16D0E8u;
label_16d0e8:
    // 0x16d0e8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16D0E8u;
    SET_GPR_U32(ctx, 31, 0x16D0F0u);
    ctx->pc = 0x16D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D0E8u;
    // 0x16d0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16D0E8u, 0x16D0F0u)) {
        return;
    }
    ctx->pc = 0x16D0F0u;
label_16d0f0:
    // 0x16d0f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16d0f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16d0f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16d0f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d0f8: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x16d0f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x16d0fc: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x16d0fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
    // 0x16d100: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x16d104: 0x0  nop
    ctx->pc = 0x16d104u;
    // NOP
label_16d108:
    // 0x16d108: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x16d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d10c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16d10cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16d110: 0x0  nop
    ctx->pc = 0x16d110u;
    // NOP
    // 0x16d114: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16D114u;
    {
        const bool branch_taken_0x16d114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D114u;
        // 0x16d118: 0x1220c0  sll         $a0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d114) {
            ctx->pc = 0x16D134u;
            goto label_16d134;
        }
    }
    ctx->pc = 0x16D11Cu;
    // 0x16d11c: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x16d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x16d120: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D120u;
    {
        const bool branch_taken_0x16d120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d120) {
            ctx->pc = 0x16D124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D120u;
            // 0x16d124: 0x86020006  lh          $v0, 0x6($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D138u;
            goto label_16d138;
        }
    }
    ctx->pc = 0x16D128u;
    // 0x16d128: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d12c: 0x50430019  beql        $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x16D12Cu;
    {
        const bool branch_taken_0x16d12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d12c) {
            ctx->pc = 0x16D130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D12Cu;
            // 0x16d130: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D194u;
            goto label_16d194;
        }
    }
    ctx->pc = 0x16D134u;
label_16d134:
    // 0x16d134: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x16d134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_16d138:
    // 0x16d138: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16D138u;
    {
        const bool branch_taken_0x16d138 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x16D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D138u;
        // 0x16d13c: 0x911021  addu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d138) {
            ctx->pc = 0x16D190u;
            goto label_16d190;
        }
    }
    ctx->pc = 0x16D140u;
    // 0x16d140: 0x26854b88  addiu       $a1, $s4, 0x4B88
    ctx->pc = 0x16d140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 19336));
    // 0x16d144: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x16d144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x16d148: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d14c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x16d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x16d150: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x16d150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x16d154: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D154u;
    {
        const bool branch_taken_0x16d154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D154u;
        // 0x16d158: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d154) {
            ctx->pc = 0x16D160u;
            goto label_16d160;
        }
    }
    ctx->pc = 0x16D15Cu;
    // 0x16d15c: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x16d15cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_16d160:
    // 0x16d160: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16d160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16d164: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x16D164u;
    SET_GPR_U32(ctx, 31, 0x16D16Cu);
    ctx->pc = 0x16D168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D164u;
    // 0x16d168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16D164u, 0x16D16Cu)) {
        return;
    }
    ctx->pc = 0x16D16Cu;
label_16d16c:
    // 0x16d16c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d170: 0x8e621a70  lw          $v0, 0x1A70($s3)
    ctx->pc = 0x16d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6768)));
    // 0x16d174: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D174u;
    {
        const bool branch_taken_0x16d174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16d174) {
            ctx->pc = 0x16D178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D174u;
            // 0x16d178: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D194u;
            goto label_16d194;
        }
    }
    ctx->pc = 0x16D17Cu;
    // 0x16d17c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d180: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D180u;
    {
        const bool branch_taken_0x16d180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d180) {
            ctx->pc = 0x16D184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D180u;
            // 0x16d184: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D194u;
            goto label_16d194;
        }
    }
    ctx->pc = 0x16D188u;
    // 0x16d188: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16D188u;
    SET_GPR_U32(ctx, 31, 0x16D190u);
    ctx->pc = 0x16D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D188u;
    // 0x16d18c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16D188u, 0x16D190u)) {
        return;
    }
    ctx->pc = 0x16D190u;
label_16d190:
    // 0x16d190: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16d190u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16d194:
    // 0x16d194: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x16d194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x16d198: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x16D198u;
    {
        const bool branch_taken_0x16d198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D198u;
        // 0x16d19c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d198) {
            ctx->pc = 0x16D108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d108;
        }
    }
    ctx->pc = 0x16D1A0u;
    // 0x16d1a0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x16d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x16d1a4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16D1A4u;
    {
        const bool branch_taken_0x16d1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1A4u;
        // 0x16d1a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1a4) {
            ctx->pc = 0x16D1F4u;
            goto label_16d1f4;
        }
    }
    ctx->pc = 0x16D1ACu;
    // 0x16d1ac: 0x8e2500d0  lw          $a1, 0xD0($s1)
    ctx->pc = 0x16d1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x16d1b0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x16D1B0u;
    {
        const bool branch_taken_0x16d1b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d1b0) {
            ctx->pc = 0x16D1F4u;
            goto label_16d1f4;
        }
    }
    ctx->pc = 0x16D1B8u;
    // 0x16d1b8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x16d1b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d1bc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x16D1BCu;
    {
        const bool branch_taken_0x16d1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d1bc) {
            ctx->pc = 0x16D1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D1BCu;
            // 0x16d1c0: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D1F8u;
            goto label_16d1f8;
        }
    }
    ctx->pc = 0x16D1C4u;
    // 0x16d1c4: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x16d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x16d1c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16D1C8u;
    {
        const bool branch_taken_0x16d1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1C8u;
        // 0x16d1cc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1c8) {
            ctx->pc = 0x16D1F4u;
            goto label_16d1f4;
        }
    }
    ctx->pc = 0x16D1D0u;
    // 0x16d1d0: 0xc0641d6  jal         func_190758
    ctx->pc = 0x16D1D0u;
    SET_GPR_U32(ctx, 31, 0x16D1D8u);
    ctx->pc = 0x16D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1D0u;
    // 0x16d1d4: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190758u, 0x16D1D0u, 0x16D1D8u)) {
        return;
    }
    ctx->pc = 0x16D1D8u;
label_16d1d8:
    // 0x16d1d8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x16d1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x16d1dc: 0x8e2700d0  lw          $a3, 0xD0($s1)
    ctx->pc = 0x16d1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x16d1e0: 0x24a54ba8  addiu       $a1, $a1, 0x4BA8
    ctx->pc = 0x16d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19368));
    // 0x16d1e4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16d1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d1e8: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x16D1E8u;
    SET_GPR_U32(ctx, 31, 0x16D1F0u);
    ctx->pc = 0x16D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D1E8u;
    // 0x16d1ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16D1E8u, 0x16D1F0u)) {
        return;
    }
    ctx->pc = 0x16D1F0u;
label_16d1f0:
    // 0x16d1f0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x16d1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16d1f4:
    // 0x16d1f4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x16d1f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16d1f8:
    // 0x16d1f8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16d1f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d1fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16d1fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d200: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x16d200u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d208: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x16d208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16d20c: 0x3e00008  jr          $ra
    ctx->pc = 0x16D20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D20Cu;
        // 0x16d210: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D214u;
    // 0x16d214: 0x0  nop
    ctx->pc = 0x16d214u;
    // NOP
    ctx->pc = 0x16d218u;
}
