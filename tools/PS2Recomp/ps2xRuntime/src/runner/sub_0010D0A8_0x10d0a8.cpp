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

// Function: sub_0010D0A8
// Address: 0x10d0a8 - 0x10d1d8
void sub_0010D0A8_0x10d0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D0A8_0x10d0a8");
#endif

    switch (ctx->pc) {
        case 0x10d0e0u: goto label_10d0e0;
        case 0x10d14cu: goto label_10d14c;
        case 0x10d190u: goto label_10d190;
        case 0x10d19cu: goto label_10d19c;
        default: break;
    }

    ctx->pc = 0x10d0a8u;

    // 0x10d0a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10d0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10d0ac: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x10d0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x10d0b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x10d0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x10d0b4: 0x24920020  addiu       $s2, $a0, 0x20
    ctx->pc = 0x10d0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10d0b8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x10d0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x10d0bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10d0bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0c0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x10d0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x10d0c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10d0c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d0c8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x10d0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x10d0cc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x10d0ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d0d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x10d0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x10d0d4: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x10d0d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
    // 0x10d0d8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x10d0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x10d0dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10d0e0:
    // 0x10d0e0: 0x52800008  beql        $s4, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10D0E0u;
    {
        const bool branch_taken_0x10d0e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d0e0) {
            ctx->pc = 0x10D0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D0E0u;
            // 0x10d0e4: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D104u;
            goto label_10d104;
        }
    }
    ctx->pc = 0x10D0E8u;
    // 0x10d0e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x10d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10d0ec: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x10D0ECu;
    {
        const bool branch_taken_0x10d0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d0ec) {
            ctx->pc = 0x10D0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D0ECu;
            // 0x10d0f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D1A4u;
            goto label_10d1a4;
        }
    }
    ctx->pc = 0x10D0F4u;
    // 0x10d0f4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x10d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10d0f8: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x10D0F8u;
    {
        const bool branch_taken_0x10d0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d0f8) {
            ctx->pc = 0x10D0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D0F8u;
            // 0x10d0fc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D1A4u;
            goto label_10d1a4;
        }
    }
    ctx->pc = 0x10D100u;
    // 0x10d100: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x10d100u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_10d104:
    // 0x10d104: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x10D104u;
    {
        const bool branch_taken_0x10d104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D104u;
        // 0x10d108: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d104) {
            ctx->pc = 0x10D1A0u;
            goto label_10d1a0;
        }
    }
    ctx->pc = 0x10D10Cu;
    // 0x10d10c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x10d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x10d110: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x10D110u;
    {
        const bool branch_taken_0x10d110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d110) {
            ctx->pc = 0x10D114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D110u;
            // 0x10d114: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D1A4u;
            goto label_10d1a4;
        }
    }
    ctx->pc = 0x10D118u;
    // 0x10d118: 0x8ec282f4  lw          $v0, -0x7D0C($s6)
    ctx->pc = 0x10d118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294935284)));
    // 0x10d11c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x10D11Cu;
    {
        const bool branch_taken_0x10d11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d11c) {
            ctx->pc = 0x10D120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D11Cu;
            // 0x10d120: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D1A4u;
            goto label_10d1a4;
        }
    }
    ctx->pc = 0x10D124u;
    // 0x10d124: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x10d124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x10d128: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10D128u;
    {
        const bool branch_taken_0x10d128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d128) {
            ctx->pc = 0x10D12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D128u;
            // 0x10d12c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D158u;
            goto label_10d158;
        }
    }
    ctx->pc = 0x10D130u;
    // 0x10d130: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x10d130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x10d134: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x10d134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x10d138: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D138u;
    {
        const bool branch_taken_0x10d138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D138u;
        // 0x10d13c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d138) {
            ctx->pc = 0x10D154u;
            goto label_10d154;
        }
    }
    ctx->pc = 0x10D140u;
    // 0x10d140: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10d140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d144: 0xc0b678e  jal         func_2D9E38
    ctx->pc = 0x10D144u;
    SET_GPR_U32(ctx, 31, 0x10D14Cu);
    ctx->pc = 0x10D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D144u;
    // 0x10d148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9E38u, 0x10D144u, 0x10D14Cu)) {
        return;
    }
    ctx->pc = 0x10D14Cu;
label_10d14c:
    // 0x10d14c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10D14Cu;
    {
        const bool branch_taken_0x10d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D14Cu;
        // 0x10d150: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d14c) {
            ctx->pc = 0x10D160u;
            goto label_10d160;
        }
    }
    ctx->pc = 0x10D154u;
label_10d154:
    // 0x10d154: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10d158:
    // 0x10d158: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x10d158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x10d15c: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x10d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_10d160:
    // 0x10d160: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x10d160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x10d164: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10d164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d168: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x10d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10d16c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x10d16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x10d170: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x10d170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x10d174: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d178: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10d178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10d17c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D17Cu;
    {
        const bool branch_taken_0x10d17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D17Cu;
        // 0x10d180: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d17c) {
            ctx->pc = 0x10D190u;
            goto label_10d190;
        }
    }
    ctx->pc = 0x10D184u;
    // 0x10d184: 0xc46c0058  lwc1        $f12, 0x58($v1)
    ctx->pc = 0x10d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10d188: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10D188u;
    SET_GPR_U32(ctx, 31, 0x10D190u);
    ctx->pc = 0x10D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D188u;
    // 0x10d18c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10D188u, 0x10D190u)) {
        return;
    }
    ctx->pc = 0x10D190u;
label_10d190:
    // 0x10d190: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10d190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10d194: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x10D194u;
    SET_GPR_U32(ctx, 31, 0x10D19Cu);
    ctx->pc = 0x10D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D194u;
    // 0x10d198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x10D194u, 0x10D19Cu)) {
        return;
    }
    ctx->pc = 0x10D19Cu;
label_10d19c:
    // 0x10d19c: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x10d19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
label_10d1a0:
    // 0x10d1a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x10d1a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_10d1a4:
    // 0x10d1a4: 0x2e620040  sltiu       $v0, $s3, 0x40
    ctx->pc = 0x10d1a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10d1a8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x10D1A8u;
    {
        const bool branch_taken_0x10d1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D1A8u;
        // 0x10d1ac: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d1a8) {
            ctx->pc = 0x10D0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d0e0;
        }
    }
    ctx->pc = 0x10D1B0u;
    // 0x10d1b0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x10d1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d1b4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x10d1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d1b8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x10d1b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d1bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x10d1bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d1c0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x10d1c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d1c4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x10d1c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d1c8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x10d1c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d1cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D1D0u;
        // 0x10d1d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D1D8u;
}
