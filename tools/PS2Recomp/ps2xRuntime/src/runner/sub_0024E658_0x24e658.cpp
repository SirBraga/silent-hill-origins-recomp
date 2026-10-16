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

// Function: sub_0024E658
// Address: 0x24e658 - 0x24e820
void sub_0024E658_0x24e658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E658_0x24e658");
#endif

    switch (ctx->pc) {
        case 0x24e658u: goto label_24e658;
        case 0x24e65cu: goto label_24e65c;
        case 0x24e660u: goto label_24e660;
        case 0x24e664u: goto label_24e664;
        case 0x24e668u: goto label_24e668;
        case 0x24e66cu: goto label_24e66c;
        case 0x24e670u: goto label_24e670;
        case 0x24e674u: goto label_24e674;
        case 0x24e678u: goto label_24e678;
        case 0x24e67cu: goto label_24e67c;
        case 0x24e680u: goto label_24e680;
        case 0x24e684u: goto label_24e684;
        case 0x24e688u: goto label_24e688;
        case 0x24e68cu: goto label_24e68c;
        case 0x24e690u: goto label_24e690;
        case 0x24e694u: goto label_24e694;
        case 0x24e698u: goto label_24e698;
        case 0x24e69cu: goto label_24e69c;
        case 0x24e6a0u: goto label_24e6a0;
        case 0x24e6a4u: goto label_24e6a4;
        case 0x24e6a8u: goto label_24e6a8;
        case 0x24e6acu: goto label_24e6ac;
        case 0x24e6b0u: goto label_24e6b0;
        case 0x24e6b4u: goto label_24e6b4;
        case 0x24e6b8u: goto label_24e6b8;
        case 0x24e6bcu: goto label_24e6bc;
        case 0x24e6c0u: goto label_24e6c0;
        case 0x24e6c4u: goto label_24e6c4;
        case 0x24e6c8u: goto label_24e6c8;
        case 0x24e6ccu: goto label_24e6cc;
        case 0x24e6d0u: goto label_24e6d0;
        case 0x24e6d4u: goto label_24e6d4;
        case 0x24e6d8u: goto label_24e6d8;
        case 0x24e6dcu: goto label_24e6dc;
        case 0x24e6e0u: goto label_24e6e0;
        case 0x24e6e4u: goto label_24e6e4;
        case 0x24e6e8u: goto label_24e6e8;
        case 0x24e6ecu: goto label_24e6ec;
        case 0x24e6f0u: goto label_24e6f0;
        case 0x24e6f4u: goto label_24e6f4;
        case 0x24e6f8u: goto label_24e6f8;
        case 0x24e6fcu: goto label_24e6fc;
        case 0x24e700u: goto label_24e700;
        case 0x24e704u: goto label_24e704;
        case 0x24e708u: goto label_24e708;
        case 0x24e70cu: goto label_24e70c;
        case 0x24e710u: goto label_24e710;
        case 0x24e714u: goto label_24e714;
        case 0x24e718u: goto label_24e718;
        case 0x24e71cu: goto label_24e71c;
        case 0x24e720u: goto label_24e720;
        case 0x24e724u: goto label_24e724;
        case 0x24e728u: goto label_24e728;
        case 0x24e72cu: goto label_24e72c;
        case 0x24e730u: goto label_24e730;
        case 0x24e734u: goto label_24e734;
        case 0x24e738u: goto label_24e738;
        case 0x24e73cu: goto label_24e73c;
        case 0x24e740u: goto label_24e740;
        case 0x24e744u: goto label_24e744;
        case 0x24e748u: goto label_24e748;
        case 0x24e74cu: goto label_24e74c;
        case 0x24e750u: goto label_24e750;
        case 0x24e754u: goto label_24e754;
        case 0x24e758u: goto label_24e758;
        case 0x24e75cu: goto label_24e75c;
        case 0x24e760u: goto label_24e760;
        case 0x24e764u: goto label_24e764;
        case 0x24e768u: goto label_24e768;
        case 0x24e76cu: goto label_24e76c;
        case 0x24e770u: goto label_24e770;
        case 0x24e774u: goto label_24e774;
        case 0x24e778u: goto label_24e778;
        case 0x24e77cu: goto label_24e77c;
        case 0x24e780u: goto label_24e780;
        case 0x24e784u: goto label_24e784;
        case 0x24e788u: goto label_24e788;
        case 0x24e78cu: goto label_24e78c;
        case 0x24e790u: goto label_24e790;
        case 0x24e794u: goto label_24e794;
        case 0x24e798u: goto label_24e798;
        case 0x24e79cu: goto label_24e79c;
        case 0x24e7a0u: goto label_24e7a0;
        case 0x24e7a4u: goto label_24e7a4;
        case 0x24e7a8u: goto label_24e7a8;
        case 0x24e7acu: goto label_24e7ac;
        case 0x24e7b0u: goto label_24e7b0;
        case 0x24e7b4u: goto label_24e7b4;
        case 0x24e7b8u: goto label_24e7b8;
        case 0x24e7bcu: goto label_24e7bc;
        case 0x24e7c0u: goto label_24e7c0;
        case 0x24e7c4u: goto label_24e7c4;
        case 0x24e7c8u: goto label_24e7c8;
        case 0x24e7ccu: goto label_24e7cc;
        case 0x24e7d0u: goto label_24e7d0;
        case 0x24e7d4u: goto label_24e7d4;
        case 0x24e7d8u: goto label_24e7d8;
        case 0x24e7dcu: goto label_24e7dc;
        case 0x24e7e0u: goto label_24e7e0;
        case 0x24e7e4u: goto label_24e7e4;
        case 0x24e7e8u: goto label_24e7e8;
        case 0x24e7ecu: goto label_24e7ec;
        case 0x24e7f0u: goto label_24e7f0;
        case 0x24e7f4u: goto label_24e7f4;
        case 0x24e7f8u: goto label_24e7f8;
        case 0x24e7fcu: goto label_24e7fc;
        case 0x24e800u: goto label_24e800;
        case 0x24e804u: goto label_24e804;
        case 0x24e808u: goto label_24e808;
        case 0x24e80cu: goto label_24e80c;
        case 0x24e810u: goto label_24e810;
        case 0x24e814u: goto label_24e814;
        case 0x24e818u: goto label_24e818;
        case 0x24e81cu: goto label_24e81c;
        default: break;
    }

    ctx->pc = 0x24e658u;

label_24e658:
    // 0x24e658: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24e658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_24e65c:
    // 0x24e65c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x24e65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_24e660:
    // 0x24e660: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24e660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24e664:
    // 0x24e664: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24e664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24e668:
    // 0x24e668: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x24e668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_24e66c:
    // 0x24e66c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24e66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24e670:
    // 0x24e670: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24e670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e674:
    // 0x24e674: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x24e674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_24e678:
    // 0x24e678: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x24e678u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_24e67c:
    // 0x24e67c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_24e680:
    if (ctx->pc == 0x24E680u) {
        ctx->pc = 0x24E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E67Cu;
        // 0x24e680: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E684u;
        goto label_24e684;
    }
    ctx->pc = 0x24E67Cu;
    {
        const bool branch_taken_0x24e67c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E67Cu;
        // 0x24e680: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e67c) {
            ctx->pc = 0x24E6A8u;
            goto label_24e6a8;
        }
    }
    ctx->pc = 0x24E684u;
label_24e684:
    // 0x24e684: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x24e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_24e688:
    // 0x24e688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24e688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24e68c:
    // 0x24e68c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x24e68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24e690:
    // 0x24e690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24e690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24e694:
    // 0x24e694: 0x40f809  jalr        $v0
label_24e698:
    if (ctx->pc == 0x24E698u) {
        ctx->pc = 0x24E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E694u;
        // 0x24e698: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E69Cu;
        goto label_24e69c;
    }
    ctx->pc = 0x24E694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E69Cu);
        ctx->pc = 0x24E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E694u;
        // 0x24e698: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E694u, 0x24E69Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E69Cu;
label_24e69c:
    // 0x24e69c: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x24e69cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_24e6a0:
    // 0x24e6a0: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_24e6a4:
    if (ctx->pc == 0x24E6A4u) {
        ctx->pc = 0x24E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6A0u;
        // 0x24e6a4: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E6A8u;
        goto label_24e6a8;
    }
    ctx->pc = 0x24E6A0u;
    {
        const bool branch_taken_0x24e6a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e6a0) {
            ctx->pc = 0x24E6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E6A0u;
            // 0x24e6a4: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e688;
        }
    }
    ctx->pc = 0x24E6A8u;
label_24e6a8:
    // 0x24e6a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24e6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24e6ac:
    // 0x24e6ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x24e6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24e6b0:
    // 0x24e6b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x24e6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24e6b4:
    // 0x24e6b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24e6b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24e6b8:
    // 0x24e6b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x24e6b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24e6bc:
    // 0x24e6bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24e6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24e6c0:
    // 0x24e6c0: 0x3e00008  jr          $ra
label_24e6c4:
    if (ctx->pc == 0x24E6C4u) {
        ctx->pc = 0x24E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6C0u;
        // 0x24e6c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E6C8u;
        goto label_24e6c8;
    }
    ctx->pc = 0x24E6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6C0u;
        // 0x24e6c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E6C8u;
label_24e6c8:
    // 0x24e6c8: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x24e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
label_24e6cc:
    // 0x24e6cc: 0x0  nop
    ctx->pc = 0x24e6ccu;
    // NOP
label_24e6d0:
    // 0x24e6d0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x24e6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_24e6d4:
    // 0x24e6d4: 0x4c0002a  bltz        $a2, . + 4 + (0x2A << 2)
label_24e6d8:
    if (ctx->pc == 0x24E6D8u) {
        ctx->pc = 0x24E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6D4u;
        // 0x24e6d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E6DCu;
        goto label_24e6dc;
    }
    ctx->pc = 0x24E6D4u;
    {
        const bool branch_taken_0x24e6d4 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x24E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6D4u;
        // 0x24e6d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e6d4) {
            ctx->pc = 0x24E780u;
            goto label_24e780;
        }
    }
    ctx->pc = 0x24E6DCu;
label_24e6dc:
    // 0x24e6dc: 0x0  nop
    ctx->pc = 0x24e6dcu;
    // NOP
label_24e6e0:
    // 0x24e6e0: 0xc4aa0000  lwc1        $f10, 0x0($a1)
    ctx->pc = 0x24e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_24e6e4:
    // 0x24e6e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x24e6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_24e6e8:
    // 0x24e6e8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x24e6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24e6ec:
    // 0x24e6ec: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x24e6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24e6f0:
    // 0x24e6f0: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x24e6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24e6f4:
    // 0x24e6f4: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x24e6f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
label_24e6f8:
    // 0x24e6f8: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x24e6f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
label_24e6fc:
    // 0x24e6fc: 0xc4e60010  lwc1        $f6, 0x10($a3)
    ctx->pc = 0x24e6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24e700:
    // 0x24e700: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x24e700u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
label_24e704:
    // 0x24e704: 0xc4e80014  lwc1        $f8, 0x14($a3)
    ctx->pc = 0x24e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_24e708:
    // 0x24e708: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x24e708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_24e70c:
    // 0x24e70c: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x24e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e710:
    // 0x24e710: 0x46065182  mul.s       $f6, $f10, $f6
    ctx->pc = 0x24e710u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_24e714:
    // 0x24e714: 0xc4e70020  lwc1        $f7, 0x20($a3)
    ctx->pc = 0x24e714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_24e718:
    // 0x24e718: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x24e718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_24e71c:
    // 0x24e71c: 0xc4e90030  lwc1        $f9, 0x30($a3)
    ctx->pc = 0x24e71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_24e720:
    // 0x24e720: 0x46085202  mul.s       $f8, $f10, $f8
    ctx->pc = 0x24e720u;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
label_24e724:
    // 0x24e724: 0xc4e50024  lwc1        $f5, 0x24($a3)
    ctx->pc = 0x24e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24e728:
    // 0x24e728: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x24e728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_24e72c:
    // 0x24e72c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x24e72cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_24e730:
    // 0x24e730: 0xc4e40028  lwc1        $f4, 0x28($a3)
    ctx->pc = 0x24e730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24e734:
    // 0x24e734: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x24e734u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_24e738:
    // 0x24e738: 0x460751c2  mul.s       $f7, $f10, $f7
    ctx->pc = 0x24e738u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
label_24e73c:
    // 0x24e73c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x24e73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_24e740:
    // 0x24e740: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x24e740u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
label_24e744:
    // 0x24e744: 0x46055142  mul.s       $f5, $f10, $f5
    ctx->pc = 0x24e744u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
label_24e748:
    // 0x24e748: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x24e748u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_24e74c:
    // 0x24e74c: 0x46045102  mul.s       $f4, $f10, $f4
    ctx->pc = 0x24e74cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_24e750:
    // 0x24e750: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x24e750u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_24e754:
    // 0x24e754: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x24e754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_24e758:
    // 0x24e758: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x24e758u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_24e75c:
    // 0x24e75c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x24e75cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_24e760:
    // 0x24e760: 0xc4e00034  lwc1        $f0, 0x34($a3)
    ctx->pc = 0x24e760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e764:
    // 0x24e764: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x24e764u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_24e768:
    // 0x24e768: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x24e768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_24e76c:
    // 0x24e76c: 0xc4e00038  lwc1        $f0, 0x38($a3)
    ctx->pc = 0x24e76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e770:
    // 0x24e770: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x24e770u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_24e774:
    // 0x24e774: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x24e774u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_24e778:
    // 0x24e778: 0x4c1ffd9  bgez        $a2, . + 4 + (-0x27 << 2)
label_24e77c:
    if (ctx->pc == 0x24E77Cu) {
        ctx->pc = 0x24E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E778u;
        // 0x24e77c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E780u;
        goto label_24e780;
    }
    ctx->pc = 0x24E778u;
    {
        const bool branch_taken_0x24e778 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x24E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E778u;
        // 0x24e77c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e778) {
            ctx->pc = 0x24E6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e6e0;
        }
    }
    ctx->pc = 0x24E780u;
label_24e780:
    // 0x24e780: 0x3e00008  jr          $ra
label_24e784:
    if (ctx->pc == 0x24E784u) {
        ctx->pc = 0x24E788u;
        goto label_24e788;
    }
    ctx->pc = 0x24E780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E788u;
label_24e788:
    // 0x24e788: 0xc4aa0000  lwc1        $f10, 0x0($a1)
    ctx->pc = 0x24e788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_24e78c:
    // 0x24e78c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24e78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e790:
    // 0x24e790: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x24e790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24e794:
    // 0x24e794: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x24e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24e798:
    // 0x24e798: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x24e798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24e79c:
    // 0x24e79c: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x24e79cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
label_24e7a0:
    // 0x24e7a0: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x24e7a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
label_24e7a4:
    // 0x24e7a4: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x24e7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24e7a8:
    // 0x24e7a8: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x24e7a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
label_24e7ac:
    // 0x24e7ac: 0xc4c80014  lwc1        $f8, 0x14($a2)
    ctx->pc = 0x24e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_24e7b0:
    // 0x24e7b0: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x24e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_24e7b4:
    // 0x24e7b4: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x24e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24e7b8:
    // 0x24e7b8: 0x46065182  mul.s       $f6, $f10, $f6
    ctx->pc = 0x24e7b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_24e7bc:
    // 0x24e7bc: 0xc4c70020  lwc1        $f7, 0x20($a2)
    ctx->pc = 0x24e7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_24e7c0:
    // 0x24e7c0: 0x46045102  mul.s       $f4, $f10, $f4
    ctx->pc = 0x24e7c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_24e7c4:
    // 0x24e7c4: 0xc4c90030  lwc1        $f9, 0x30($a2)
    ctx->pc = 0x24e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_24e7c8:
    // 0x24e7c8: 0x46085202  mul.s       $f8, $f10, $f8
    ctx->pc = 0x24e7c8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
label_24e7cc:
    // 0x24e7cc: 0xc4c50024  lwc1        $f5, 0x24($a2)
    ctx->pc = 0x24e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24e7d0:
    // 0x24e7d0: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x24e7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_24e7d4:
    // 0x24e7d4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x24e7d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_24e7d8:
    // 0x24e7d8: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x24e7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e7dc:
    // 0x24e7dc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x24e7dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_24e7e0:
    // 0x24e7e0: 0x460751c2  mul.s       $f7, $f10, $f7
    ctx->pc = 0x24e7e0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
label_24e7e4:
    // 0x24e7e4: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x24e7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
label_24e7e8:
    // 0x24e7e8: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x24e7e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
label_24e7ec:
    // 0x24e7ec: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x24e7ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_24e7f0:
    // 0x24e7f0: 0x46055142  mul.s       $f5, $f10, $f5
    ctx->pc = 0x24e7f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
label_24e7f4:
    // 0x24e7f4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x24e7f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_24e7f8:
    // 0x24e7f8: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x24e7f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_24e7fc:
    // 0x24e7fc: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x24e7fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_24e800:
    // 0x24e800: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x24e800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_24e804:
    // 0x24e804: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x24e804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e808:
    // 0x24e808: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x24e808u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_24e80c:
    // 0x24e80c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x24e80cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_24e810:
    // 0x24e810: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x24e810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e814:
    // 0x24e814: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x24e814u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_24e818:
    // 0x24e818: 0x3e00008  jr          $ra
label_24e81c:
    if (ctx->pc == 0x24E81Cu) {
        ctx->pc = 0x24E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E818u;
        // 0x24e81c: 0xe4830008  swc1        $f3, 0x8($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E820u;
        goto label_fallthrough_0x24e818;
    }
    ctx->pc = 0x24E818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E818u;
        // 0x24e81c: 0xe4830008  swc1        $f3, 0x8($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24e818:
    ctx->pc = 0x24E820u;
}
