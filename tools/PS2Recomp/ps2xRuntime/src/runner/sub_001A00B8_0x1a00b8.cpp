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

// Function: sub_001A00B8
// Address: 0x1a00b8 - 0x1a0190
void sub_001A00B8_0x1a00b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A00B8_0x1a00b8");
#endif

    switch (ctx->pc) {
        case 0x1a00f4u: goto label_1a00f4;
        case 0x1a0118u: goto label_1a0118;
        case 0x1a0130u: goto label_1a0130;
        case 0x1a0140u: goto label_1a0140;
        default: break;
    }

    ctx->pc = 0x1a00b8u;

    // 0x1a00b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a00b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a00bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a00bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a00c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a00c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a00c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a00c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a00c8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1a00c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a00cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a00ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a00d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a00d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a00d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a00d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a00d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a00d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a00dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1a00dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a00e0: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A00E0u;
    {
        const bool branch_taken_0x1a00e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00E0u;
        // 0x1a00e4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00e0) {
            ctx->pc = 0x1A0164u;
            goto label_1a0164;
        }
    }
    ctx->pc = 0x1A00E8u;
    // 0x1a00e8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1a00e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a00ec: 0xc068064  jal         func_1A0190
    ctx->pc = 0x1A00ECu;
    SET_GPR_U32(ctx, 31, 0x1A00F4u);
    ctx->pc = 0x1A00F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A00ECu;
    // 0x1a00f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0190u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0190u, 0x1A00ECu, 0x1A00F4u)) {
        return;
    }
    ctx->pc = 0x1A00F4u;
label_1a00f4:
    // 0x1a00f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a00f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a00f8: 0x5480001a  bnel        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A00F8u;
    {
        const bool branch_taken_0x1a00f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a00f8) {
            ctx->pc = 0x1A00FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A00F8u;
            // 0x1a00fc: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0164u;
            goto label_1a0164;
        }
    }
    ctx->pc = 0x1A0100u;
    // 0x1a0100: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1a0100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0104: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1a0104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a0108: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1a0108u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a010c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a010cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0110: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x1a0110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1a0114: 0x0  nop
    ctx->pc = 0x1a0114u;
    // NOP
label_1a0118:
    // 0x1a0118: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a0118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a011c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A011Cu;
    {
        const bool branch_taken_0x1a011c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A011Cu;
        // 0x1a0120: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a011c) {
            ctx->pc = 0x1A014Cu;
            goto label_1a014c;
        }
    }
    ctx->pc = 0x1A0124u;
    // 0x1a0124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0128: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x1A0128u;
    SET_GPR_U32(ctx, 31, 0x1A0130u);
    ctx->pc = 0x1A012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0128u;
    // 0x1a012c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x1A0128u, 0x1A0130u)) {
        return;
    }
    ctx->pc = 0x1A0130u;
label_1a0130:
    // 0x1a0130: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x1a0130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x1a0134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0138: 0xc065c40  jal         func_197100
    ctx->pc = 0x1A0138u;
    SET_GPR_U32(ctx, 31, 0x1A0140u);
    ctx->pc = 0x1A013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0138u;
    // 0x1a013c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1A0138u, 0x1A0140u)) {
        return;
    }
    ctx->pc = 0x1A0140u;
label_1a0140:
    // 0x1a0140: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1a0140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1a0144: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0144u;
    {
        const bool branch_taken_0x1a0144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0144u;
        // 0x1a0148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0144) {
            ctx->pc = 0x1A0160u;
            goto label_1a0160;
        }
    }
    ctx->pc = 0x1A014Cu;
label_1a014c:
    // 0x1a014c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1a014cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a0150: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x1a0150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a0154: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1A0154u;
    {
        const bool branch_taken_0x1a0154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0154u;
        // 0x1a0158: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0154) {
            ctx->pc = 0x1A0118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0118;
        }
    }
    ctx->pc = 0x1A015Cu;
    // 0x1a015c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0160:
    // 0x1a0160: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x1a0160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
label_1a0164:
    // 0x1a0164: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x1a0164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a0168: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a0168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a016c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a016cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0170: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a0170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0178: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a0178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a017c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a017cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0180: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a0180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a0184: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1a0184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1a0188: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0188u;
        // 0x1a018c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0190u;
}
