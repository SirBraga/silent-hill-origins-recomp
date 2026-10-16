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

// Function: sub_0024B528
// Address: 0x24b528 - 0x24b650
void sub_0024B528_0x24b528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B528_0x24b528");
#endif

    switch (ctx->pc) {
        case 0x24b570u: goto label_24b570;
        case 0x24b590u: goto label_24b590;
        case 0x24b5bcu: goto label_24b5bc;
        default: break;
    }

    ctx->pc = 0x24b528u;

    // 0x24b528: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24b528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24b52c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24b52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x24b530: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24b530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x24b534: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24b534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b538: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24b538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24b53c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24b53cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b540: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x24b540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x24b544: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x24b544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x24b548: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B548u;
    {
        const bool branch_taken_0x24b548 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B548u;
        // 0x24b54c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b548) {
            ctx->pc = 0x24B564u;
            goto label_24b564;
        }
    }
    ctx->pc = 0x24B550u;
    // 0x24b550: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24b550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24b554: 0x8c633f60  lw          $v1, 0x3F60($v1)
    ctx->pc = 0x24b554u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3F60u));
    // 0x24b558: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24b558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24b55c: 0x24420fd4  addiu       $v0, $v0, 0xFD4
    ctx->pc = 0x24b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4052));
    // 0x24b560: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x24b560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24b564:
    // 0x24b564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b568: 0xc092c88  jal         func_24B220
    ctx->pc = 0x24B568u;
    SET_GPR_U32(ctx, 31, 0x24B570u);
    ctx->pc = 0x24B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B568u;
    // 0x24b56c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B220u, 0x24B568u, 0x24B570u)) {
        return;
    }
    ctx->pc = 0x24B570u;
label_24b570:
    // 0x24b570: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x24b570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b574: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24b574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b578: 0x0  nop
    ctx->pc = 0x24b578u;
    // NOP
    // 0x24b57c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24B57Cu;
    {
        const bool branch_taken_0x24b57c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b57c) {
            ctx->pc = 0x24B580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B57Cu;
            // 0x24b580: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B584u;
            goto label_24b584;
        }
    }
    ctx->pc = 0x24B584u;
label_24b584:
    // 0x24b584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b588: 0xc092c62  jal         func_24B188
    ctx->pc = 0x24B588u;
    SET_GPR_U32(ctx, 31, 0x24B590u);
    ctx->pc = 0x24B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B588u;
    // 0x24b58c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B188u, 0x24B588u, 0x24B590u)) {
        return;
    }
    ctx->pc = 0x24B590u;
label_24b590:
    // 0x24b590: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x24b590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b594: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24b594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b598: 0x0  nop
    ctx->pc = 0x24b598u;
    // NOP
    // 0x24b59c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24B59Cu;
    {
        const bool branch_taken_0x24b59c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b59c) {
            ctx->pc = 0x24B5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B59Cu;
            // 0x24b5a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B5A4u;
            goto label_24b5a4;
        }
    }
    ctx->pc = 0x24B5A4u;
label_24b5a4:
    // 0x24b5a4: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x24B5A4u;
    {
        const bool branch_taken_0x24b5a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5A4u;
        // 0x24b5a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5a4) {
            ctx->pc = 0x24B5D0u;
            goto label_24b5d0;
        }
    }
    ctx->pc = 0x24B5ACu;
    // 0x24b5ac: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x24B5ACu;
    {
        const bool branch_taken_0x24b5ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b5ac) {
            ctx->pc = 0x24B5D0u;
            goto label_24b5d0;
        }
    }
    ctx->pc = 0x24B5B4u;
    // 0x24b5b4: 0xc092cb2  jal         func_24B2C8
    ctx->pc = 0x24B5B4u;
    SET_GPR_U32(ctx, 31, 0x24B5BCu);
    ctx->pc = 0x24B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5B4u;
    // 0x24b5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B2C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B2C8u, 0x24B5B4u, 0x24B5BCu)) {
        return;
    }
    ctx->pc = 0x24B5BCu;
label_24b5bc:
    // 0x24b5bc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x24b5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b5c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24b5c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b5c4: 0x0  nop
    ctx->pc = 0x24b5c4u;
    // NOP
    // 0x24b5c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24B5C8u;
    {
        const bool branch_taken_0x24b5c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b5c8) {
            ctx->pc = 0x24B5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B5C8u;
            // 0x24b5cc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B5D0u;
            goto label_24b5d0;
        }
    }
    ctx->pc = 0x24B5D0u;
label_24b5d0:
    // 0x24b5d0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B5D0u;
    {
        const bool branch_taken_0x24b5d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5D0u;
        // 0x24b5d4: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5d0) {
            ctx->pc = 0x24B5E0u;
            goto label_24b5e0;
        }
    }
    ctx->pc = 0x24B5D8u;
    // 0x24b5d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24B5D8u;
    {
        const bool branch_taken_0x24b5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5D8u;
        // 0x24b5dc: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5d8) {
            ctx->pc = 0x24B5ECu;
            goto label_24b5ec;
        }
    }
    ctx->pc = 0x24B5E0u;
label_24b5e0:
    // 0x24b5e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24b5e4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x24b5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x24b5e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24b5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_24b5ec:
    // 0x24b5ec: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B5ECu;
    {
        const bool branch_taken_0x24b5ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b5ec) {
            ctx->pc = 0x24B5FCu;
            goto label_24b5fc;
        }
    }
    ctx->pc = 0x24B5F4u;
    // 0x24b5f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24B5F4u;
    {
        const bool branch_taken_0x24b5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B5F4u;
        // 0x24b5f8: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b5f4) {
            ctx->pc = 0x24B608u;
            goto label_24b608;
        }
    }
    ctx->pc = 0x24B5FCu;
label_24b5fc:
    // 0x24b5fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x24b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x24b600: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x24b600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x24b604: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24b604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_24b608:
    // 0x24b608: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B608u;
    {
        const bool branch_taken_0x24b608 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B608u;
        // 0x24b60c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b608) {
            ctx->pc = 0x24B618u;
            goto label_24b618;
        }
    }
    ctx->pc = 0x24B610u;
    // 0x24b610: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24B610u;
    {
        const bool branch_taken_0x24b610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B610u;
        // 0x24b614: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b610) {
            ctx->pc = 0x24B624u;
            goto label_24b624;
        }
    }
    ctx->pc = 0x24B618u;
label_24b618:
    // 0x24b618: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x24b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
    // 0x24b61c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b620: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24b620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_24b624:
    // 0x24b624: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x24b624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x24b628: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24b628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b62c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24b62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24b630: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24b630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b634: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24b634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b638: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x24b638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b63c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x24b63cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b644: 0x3e00008  jr          $ra
    ctx->pc = 0x24B644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B644u;
        // 0x24b648: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B64Cu;
    // 0x24b64c: 0x0  nop
    ctx->pc = 0x24b64cu;
    // NOP
    ctx->pc = 0x24b650u;
}
