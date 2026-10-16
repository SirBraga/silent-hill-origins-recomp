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

// Function: sub_001CC640
// Address: 0x1cc640 - 0x1cc710
void sub_001CC640_0x1cc640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC640_0x1cc640");
#endif

    switch (ctx->pc) {
        case 0x1cc640u: goto label_1cc640;
        case 0x1cc644u: goto label_1cc644;
        case 0x1cc648u: goto label_1cc648;
        case 0x1cc64cu: goto label_1cc64c;
        case 0x1cc650u: goto label_1cc650;
        case 0x1cc654u: goto label_1cc654;
        case 0x1cc658u: goto label_1cc658;
        case 0x1cc65cu: goto label_1cc65c;
        case 0x1cc660u: goto label_1cc660;
        case 0x1cc664u: goto label_1cc664;
        case 0x1cc668u: goto label_1cc668;
        case 0x1cc66cu: goto label_1cc66c;
        case 0x1cc670u: goto label_1cc670;
        case 0x1cc674u: goto label_1cc674;
        case 0x1cc678u: goto label_1cc678;
        case 0x1cc67cu: goto label_1cc67c;
        case 0x1cc680u: goto label_1cc680;
        case 0x1cc684u: goto label_1cc684;
        case 0x1cc688u: goto label_1cc688;
        case 0x1cc68cu: goto label_1cc68c;
        case 0x1cc690u: goto label_1cc690;
        case 0x1cc694u: goto label_1cc694;
        case 0x1cc698u: goto label_1cc698;
        case 0x1cc69cu: goto label_1cc69c;
        case 0x1cc6a0u: goto label_1cc6a0;
        case 0x1cc6a4u: goto label_1cc6a4;
        case 0x1cc6a8u: goto label_1cc6a8;
        case 0x1cc6acu: goto label_1cc6ac;
        case 0x1cc6b0u: goto label_1cc6b0;
        case 0x1cc6b4u: goto label_1cc6b4;
        case 0x1cc6b8u: goto label_1cc6b8;
        case 0x1cc6bcu: goto label_1cc6bc;
        case 0x1cc6c0u: goto label_1cc6c0;
        case 0x1cc6c4u: goto label_1cc6c4;
        case 0x1cc6c8u: goto label_1cc6c8;
        case 0x1cc6ccu: goto label_1cc6cc;
        case 0x1cc6d0u: goto label_1cc6d0;
        case 0x1cc6d4u: goto label_1cc6d4;
        case 0x1cc6d8u: goto label_1cc6d8;
        case 0x1cc6dcu: goto label_1cc6dc;
        case 0x1cc6e0u: goto label_1cc6e0;
        case 0x1cc6e4u: goto label_1cc6e4;
        case 0x1cc6e8u: goto label_1cc6e8;
        case 0x1cc6ecu: goto label_1cc6ec;
        case 0x1cc6f0u: goto label_1cc6f0;
        case 0x1cc6f4u: goto label_1cc6f4;
        case 0x1cc6f8u: goto label_1cc6f8;
        case 0x1cc6fcu: goto label_1cc6fc;
        case 0x1cc700u: goto label_1cc700;
        case 0x1cc704u: goto label_1cc704;
        case 0x1cc708u: goto label_1cc708;
        case 0x1cc70cu: goto label_1cc70c;
        default: break;
    }

    ctx->pc = 0x1cc640u;

label_1cc640:
    // 0x1cc640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cc640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1cc644:
    // 0x1cc644: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1cc644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1cc648:
    // 0x1cc648: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc64c:
    // 0x1cc64c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1cc64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1cc650:
    // 0x1cc650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cc650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cc654:
    // 0x1cc654: 0x263002c4  addiu       $s0, $s1, 0x2C4
    ctx->pc = 0x1cc654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 708));
label_1cc658:
    // 0x1cc658: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1cc658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1cc65c:
    // 0x1cc65c: 0x263202d8  addiu       $s2, $s1, 0x2D8
    ctx->pc = 0x1cc65cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 728));
label_1cc660:
    // 0x1cc660: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1cc660u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1cc664:
    // 0x1cc664: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1cc664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cc668:
    // 0x1cc668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cc66c:
    // 0x1cc66c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1cc66cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1cc670:
    // 0x1cc670: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1cc670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1cc674:
    // 0x1cc674: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1cc678:
    if (ctx->pc == 0x1CC678u) {
        ctx->pc = 0x1CC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC674u;
        // 0x1cc678: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC67Cu;
        goto label_1cc67c;
    }
    ctx->pc = 0x1CC674u;
    {
        const bool branch_taken_0x1cc674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC674u;
        // 0x1cc678: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc674) {
            ctx->pc = 0x1CC6DCu;
            goto label_1cc6dc;
        }
    }
    ctx->pc = 0x1CC67Cu;
label_1cc67c:
    // 0x1cc67c: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x1cc67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cc680:
    // 0x1cc680: 0xc60e0004  lwc1        $f14, 0x4($s0)
    ctx->pc = 0x1cc680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1cc684:
    // 0x1cc684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc688:
    // 0x1cc688: 0xc60f000c  lwc1        $f15, 0xC($s0)
    ctx->pc = 0x1cc688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cc68c:
    // 0x1cc68c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cc68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc690:
    // 0x1cc690: 0xc06d01e  jal         func_1B4078
label_1cc694:
    if (ctx->pc == 0x1CC694u) {
        ctx->pc = 0x1CC694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC690u;
        // 0x1cc694: 0xc6100010  lwc1        $f16, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC698u;
        goto label_1cc698;
    }
    ctx->pc = 0x1CC690u;
    SET_GPR_U32(ctx, 31, 0x1CC698u);
    ctx->pc = 0x1CC694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC690u;
    // 0x1cc694: 0xc6100010  lwc1        $f16, 0x10($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1CC690u, 0x1CC698u)) {
        return;
    }
    ctx->pc = 0x1CC698u;
label_1cc698:
    // 0x1cc698: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1cc698u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cc69c:
    // 0x1cc69c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1cc69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_1cc6a0:
    // 0x1cc6a0: 0x8e220270  lw          $v0, 0x270($s1)
    ctx->pc = 0x1cc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_1cc6a4:
    // 0x1cc6a4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1cc6a8:
    if (ctx->pc == 0x1CC6A8u) {
        ctx->pc = 0x1CC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6A4u;
        // 0x1cc6a8: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6ACu;
        goto label_1cc6ac;
    }
    ctx->pc = 0x1CC6A4u;
    {
        const bool branch_taken_0x1cc6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc6a4) {
            ctx->pc = 0x1CC6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC6A4u;
            // 0x1cc6a8: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC6E0u;
            goto label_1cc6e0;
        }
    }
    ctx->pc = 0x1CC6ACu;
label_1cc6ac:
    // 0x1cc6ac: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_1cc6b0:
    if (ctx->pc == 0x1CC6B0u) {
        ctx->pc = 0x1CC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6ACu;
        // 0x1cc6b0: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6B4u;
        goto label_1cc6b4;
    }
    ctx->pc = 0x1CC6ACu;
    {
        const bool branch_taken_0x1cc6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc6ac) {
            ctx->pc = 0x1CC6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC6ACu;
            // 0x1cc6b0: 0x2652001c  addiu       $s2, $s2, 0x1C (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC6E0u;
            goto label_1cc6e0;
        }
    }
    ctx->pc = 0x1CC6B4u;
label_1cc6b4:
    // 0x1cc6b4: 0xae200270  sw          $zero, 0x270($s1)
    ctx->pc = 0x1cc6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
label_1cc6b8:
    // 0x1cc6b8: 0xc0731e8  jal         func_1CC7A0
label_1cc6bc:
    if (ctx->pc == 0x1CC6BCu) {
        ctx->pc = 0x1CC6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6B8u;
        // 0x1cc6bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6C0u;
        goto label_1cc6c0;
    }
    ctx->pc = 0x1CC6B8u;
    SET_GPR_U32(ctx, 31, 0x1CC6C0u);
    ctx->pc = 0x1CC6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6B8u;
    // 0x1cc6bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC7A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC7A0u, 0x1CC6B8u, 0x1CC6C0u)) {
        return;
    }
    ctx->pc = 0x1CC6C0u;
label_1cc6c0:
    // 0x1cc6c0: 0x8e260264  lw          $a2, 0x264($s1)
    ctx->pc = 0x1cc6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1cc6c4:
    // 0x1cc6c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cc6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cc6c8:
    // 0x1cc6c8: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cc6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cc6cc:
    // 0x1cc6cc: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cc6ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cc6d0:
    // 0x1cc6d0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cc6d4:
    // 0x1cc6d4: 0x60f809  jalr        $v1
label_1cc6d8:
    if (ctx->pc == 0x1CC6D8u) {
        ctx->pc = 0x1CC6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6D4u;
        // 0x1cc6d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6DCu;
        goto label_1cc6dc;
    }
    ctx->pc = 0x1CC6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CC6DCu);
        ctx->pc = 0x1CC6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6D4u;
        // 0x1cc6d8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC6D4u, 0x1CC6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC6DCu;
label_1cc6dc:
    // 0x1cc6dc: 0x2652001c  addiu       $s2, $s2, 0x1C
    ctx->pc = 0x1cc6dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_1cc6e0:
    // 0x1cc6e0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1cc6e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1cc6e4:
    // 0x1cc6e4: 0x661ffe2  bgez        $s3, . + 4 + (-0x1E << 2)
label_1cc6e8:
    if (ctx->pc == 0x1CC6E8u) {
        ctx->pc = 0x1CC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6E4u;
        // 0x1cc6e8: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6ECu;
        goto label_1cc6ec;
    }
    ctx->pc = 0x1CC6E4u;
    {
        const bool branch_taken_0x1cc6e4 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1CC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6E4u;
        // 0x1cc6e8: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6e4) {
            ctx->pc = 0x1CC670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc670;
        }
    }
    ctx->pc = 0x1CC6ECu;
label_1cc6ec:
    // 0x1cc6ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1cc6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cc6f0:
    // 0x1cc6f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1cc6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc6f4:
    // 0x1cc6f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cc6f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc6f8:
    // 0x1cc6f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1cc6f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc6fc:
    // 0x1cc6fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc700:
    // 0x1cc700: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1cc700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cc704:
    // 0x1cc704: 0x3e00008  jr          $ra
label_1cc708:
    if (ctx->pc == 0x1CC708u) {
        ctx->pc = 0x1CC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC704u;
        // 0x1cc708: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC70Cu;
        goto label_1cc70c;
    }
    ctx->pc = 0x1CC704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC704u;
        // 0x1cc708: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC70Cu;
label_1cc70c:
    // 0x1cc70c: 0x0  nop
    ctx->pc = 0x1cc70cu;
    // NOP
    ctx->pc = 0x1cc710u;
}
