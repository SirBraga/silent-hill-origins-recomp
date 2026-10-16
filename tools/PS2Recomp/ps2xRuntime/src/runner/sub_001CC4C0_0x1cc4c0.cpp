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

// Function: sub_001CC4C0
// Address: 0x1cc4c0 - 0x1cc5a8
void sub_001CC4C0_0x1cc4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC4C0_0x1cc4c0");
#endif

    switch (ctx->pc) {
        case 0x1cc514u: goto label_1cc514;
        case 0x1cc524u: goto label_1cc524;
        case 0x1cc530u: goto label_1cc530;
        case 0x1cc53cu: goto label_1cc53c;
        case 0x1cc544u: goto label_1cc544;
        default: break;
    }

    ctx->pc = 0x1cc4c0u;

    // 0x1cc4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc4c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cc4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cc4c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc4cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc4d4: 0x8e0202a4  lw          $v0, 0x2A4($s0)
    ctx->pc = 0x1cc4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x1cc4d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CC4D8u;
    {
        const bool branch_taken_0x1cc4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4D8u;
        // 0x1cc4dc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4d8) {
            ctx->pc = 0x1CC518u;
            goto label_1cc518;
        }
    }
    ctx->pc = 0x1CC4E0u;
    // 0x1cc4e0: 0xc60002a8  lwc1        $f0, 0x2A8($s0)
    ctx->pc = 0x1cc4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc4e4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1cc4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc4e8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1cc4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1cc4ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc4f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cc4f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cc4f4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1cc4f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc4f8: 0x0  nop
    ctx->pc = 0x1cc4f8u;
    // NOP
    // 0x1cc4fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC4FCu;
    {
        const bool branch_taken_0x1cc4fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4FCu;
        // 0x1cc500: 0xe60002a8  swc1        $f0, 0x2A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4fc) {
            ctx->pc = 0x1CC518u;
            goto label_1cc518;
        }
    }
    ctx->pc = 0x1CC504u;
    // 0x1cc504: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1cc504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cc508: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc50c: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1CC50Cu;
    SET_GPR_U32(ctx, 31, 0x1CC514u);
    ctx->pc = 0x1CC510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC50Cu;
    // 0x1cc510: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1CC50Cu, 0x1CC514u)) {
        return;
    }
    ctx->pc = 0x1CC514u;
label_1cc514:
    // 0x1cc514: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x1cc514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
label_1cc518:
    // 0x1cc518: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1cc518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc51c: 0xc073190  jal         func_1CC640
    ctx->pc = 0x1CC51Cu;
    SET_GPR_U32(ctx, 31, 0x1CC524u);
    ctx->pc = 0x1CC520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC51Cu;
    // 0x1cc520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC640u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC640u, 0x1CC51Cu, 0x1CC524u)) {
        return;
    }
    ctx->pc = 0x1CC524u;
label_1cc524:
    // 0x1cc524: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1cc524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc528: 0xc07316a  jal         func_1CC5A8
    ctx->pc = 0x1CC528u;
    SET_GPR_U32(ctx, 31, 0x1CC530u);
    ctx->pc = 0x1CC52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC528u;
    // 0x1cc52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CC5A8u, 0x1CC528u, 0x1CC530u)) {
        return;
    }
    ctx->pc = 0x1CC530u;
label_1cc530:
    // 0x1cc530: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1cc530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc534: 0xc072d9c  jal         func_1CB670
    ctx->pc = 0x1CC534u;
    SET_GPR_U32(ctx, 31, 0x1CC53Cu);
    ctx->pc = 0x1CC538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC534u;
    // 0x1cc538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CB670u, 0x1CC534u, 0x1CC53Cu)) {
        return;
    }
    ctx->pc = 0x1CC53Cu;
label_1cc53c:
    // 0x1cc53c: 0xc072df0  jal         func_1CB7C0
    ctx->pc = 0x1CC53Cu;
    SET_GPR_U32(ctx, 31, 0x1CC544u);
    ctx->pc = 0x1CC540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC53Cu;
    // 0x1cc540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CB7C0u, 0x1CC53Cu, 0x1CC544u)) {
        return;
    }
    ctx->pc = 0x1CC544u;
label_1cc544:
    // 0x1cc544: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1cc544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1cc548: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CC548u;
    {
        const bool branch_taken_0x1cc548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc548) {
            ctx->pc = 0x1CC54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC548u;
            // 0x1cc54c: 0xae00026c  sw          $zero, 0x26C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC594u;
            goto label_1cc594;
        }
    }
    ctx->pc = 0x1CC550u;
    // 0x1cc550: 0x8e0202f8  lw          $v0, 0x2F8($s0)
    ctx->pc = 0x1cc550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x1cc554: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1CC554u;
    {
        const bool branch_taken_0x1cc554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc554) {
            ctx->pc = 0x1CC558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC554u;
            // 0x1cc558: 0xae00026c  sw          $zero, 0x26C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC594u;
            goto label_1cc594;
        }
    }
    ctx->pc = 0x1CC55Cu;
    // 0x1cc55c: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x1cc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x1cc560: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1CC560u;
    {
        const bool branch_taken_0x1cc560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc560) {
            ctx->pc = 0x1CC564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC560u;
            // 0x1cc564: 0xae00026c  sw          $zero, 0x26C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC594u;
            goto label_1cc594;
        }
    }
    ctx->pc = 0x1CC568u;
    // 0x1cc568: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x1cc568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x1cc56c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC56Cu;
    {
        const bool branch_taken_0x1cc56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc56c) {
            ctx->pc = 0x1CC570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC56Cu;
            // 0x1cc570: 0xae00026c  sw          $zero, 0x26C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC594u;
            goto label_1cc594;
        }
    }
    ctx->pc = 0x1CC574u;
    // 0x1cc574: 0x8e02034c  lw          $v0, 0x34C($s0)
    ctx->pc = 0x1cc574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 844)));
    // 0x1cc578: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC578u;
    {
        const bool branch_taken_0x1cc578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc578) {
            ctx->pc = 0x1CC57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC578u;
            // 0x1cc57c: 0xae00026c  sw          $zero, 0x26C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC594u;
            goto label_1cc594;
        }
    }
    ctx->pc = 0x1CC580u;
    // 0x1cc580: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1cc580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x1cc584: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC584u;
    {
        const bool branch_taken_0x1cc584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc584) {
            ctx->pc = 0x1CC588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC584u;
            // 0x1cc588: 0xae00026c  sw          $zero, 0x26C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC594u;
            goto label_1cc594;
        }
    }
    ctx->pc = 0x1CC58Cu;
    // 0x1cc58c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc590: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1cc590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
label_1cc594:
    // 0x1cc594: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cc594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5A0u;
        // 0x1cc5a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC5A8u;
}
