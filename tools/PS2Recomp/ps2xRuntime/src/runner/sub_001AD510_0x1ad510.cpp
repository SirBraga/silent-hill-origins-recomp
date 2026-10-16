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

// Function: sub_001AD510
// Address: 0x1ad510 - 0x1ad5a0
void sub_001AD510_0x1ad510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD510_0x1ad510");
#endif

    switch (ctx->pc) {
        case 0x1ad510u: goto label_1ad510;
        case 0x1ad514u: goto label_1ad514;
        case 0x1ad518u: goto label_1ad518;
        case 0x1ad51cu: goto label_1ad51c;
        case 0x1ad520u: goto label_1ad520;
        case 0x1ad524u: goto label_1ad524;
        case 0x1ad528u: goto label_1ad528;
        case 0x1ad52cu: goto label_1ad52c;
        case 0x1ad530u: goto label_1ad530;
        case 0x1ad534u: goto label_1ad534;
        case 0x1ad538u: goto label_1ad538;
        case 0x1ad53cu: goto label_1ad53c;
        case 0x1ad540u: goto label_1ad540;
        case 0x1ad544u: goto label_1ad544;
        case 0x1ad548u: goto label_1ad548;
        case 0x1ad54cu: goto label_1ad54c;
        case 0x1ad550u: goto label_1ad550;
        case 0x1ad554u: goto label_1ad554;
        case 0x1ad558u: goto label_1ad558;
        case 0x1ad55cu: goto label_1ad55c;
        case 0x1ad560u: goto label_1ad560;
        case 0x1ad564u: goto label_1ad564;
        case 0x1ad568u: goto label_1ad568;
        case 0x1ad56cu: goto label_1ad56c;
        case 0x1ad570u: goto label_1ad570;
        case 0x1ad574u: goto label_1ad574;
        case 0x1ad578u: goto label_1ad578;
        case 0x1ad57cu: goto label_1ad57c;
        case 0x1ad580u: goto label_1ad580;
        case 0x1ad584u: goto label_1ad584;
        case 0x1ad588u: goto label_1ad588;
        case 0x1ad58cu: goto label_1ad58c;
        case 0x1ad590u: goto label_1ad590;
        case 0x1ad594u: goto label_1ad594;
        case 0x1ad598u: goto label_1ad598;
        case 0x1ad59cu: goto label_1ad59c;
        default: break;
    }

    ctx->pc = 0x1ad510u;

label_1ad510:
    // 0x1ad510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ad514:
    // 0x1ad514: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ad514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ad518:
    // 0x1ad518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ad51c:
    // 0x1ad51c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ad520:
    // 0x1ad520: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x1ad520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1ad524:
    // 0x1ad524: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_1ad528:
    if (ctx->pc == 0x1AD528u) {
        ctx->pc = 0x1AD528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD524u;
        // 0x1ad528: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD52Cu;
        goto label_1ad52c;
    }
    ctx->pc = 0x1AD524u;
    {
        const bool branch_taken_0x1ad524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad524) {
            ctx->pc = 0x1AD528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD524u;
            // 0x1ad528: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD594u;
            goto label_1ad594;
        }
    }
    ctx->pc = 0x1AD52Cu;
label_1ad52c:
    // 0x1ad52c: 0xc06b906  jal         func_1AE418
label_1ad530:
    if (ctx->pc == 0x1AD530u) {
        ctx->pc = 0x1AD534u;
        goto label_1ad534;
    }
    ctx->pc = 0x1AD52Cu;
    SET_GPR_U32(ctx, 31, 0x1AD534u);
    ctx->pc = 0x1AE418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE418u, 0x1AD52Cu, 0x1AD534u)) {
        return;
    }
    ctx->pc = 0x1AD534u;
label_1ad534:
    // 0x1ad534: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1ad534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad538:
    // 0x1ad538: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ad538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ad53c:
    // 0x1ad53c: 0x0  nop
    ctx->pc = 0x1ad53cu;
    // NOP
label_1ad540:
    // 0x1ad540: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1ad544:
    if (ctx->pc == 0x1AD544u) {
        ctx->pc = 0x1AD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD540u;
        // 0x1ad544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD548u;
        goto label_1ad548;
    }
    ctx->pc = 0x1AD540u;
    {
        const bool branch_taken_0x1ad540 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD540u;
        // 0x1ad544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad540) {
            ctx->pc = 0x1AD54Cu;
            goto label_1ad54c;
        }
    }
    ctx->pc = 0x1AD548u;
label_1ad548:
    // 0x1ad548: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad54c:
    // 0x1ad54c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1ad550:
    if (ctx->pc == 0x1AD550u) {
        ctx->pc = 0x1AD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD54Cu;
        // 0x1ad550: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD554u;
        goto label_1ad554;
    }
    ctx->pc = 0x1AD54Cu;
    {
        const bool branch_taken_0x1ad54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad54c) {
            ctx->pc = 0x1AD550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD54Cu;
            // 0x1ad550: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD594u;
            goto label_1ad594;
        }
    }
    ctx->pc = 0x1AD554u;
label_1ad554:
    // 0x1ad554: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ad554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ad558:
    // 0x1ad558: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ad558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ad55c:
    // 0x1ad55c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ad55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ad560:
    // 0x1ad560: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1ad564:
    if (ctx->pc == 0x1AD564u) {
        ctx->pc = 0x1AD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD560u;
        // 0x1ad564: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD568u;
        goto label_1ad568;
    }
    ctx->pc = 0x1AD560u;
    {
        const bool branch_taken_0x1ad560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad560) {
            ctx->pc = 0x1AD564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD560u;
            // 0x1ad564: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD594u;
            goto label_1ad594;
        }
    }
    ctx->pc = 0x1AD568u;
label_1ad568:
    // 0x1ad568: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1ad568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1ad56c:
    // 0x1ad56c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1ad570:
    if (ctx->pc == 0x1AD570u) {
        ctx->pc = 0x1AD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD56Cu;
        // 0x1ad570: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD574u;
        goto label_1ad574;
    }
    ctx->pc = 0x1AD56Cu;
    {
        const bool branch_taken_0x1ad56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD56Cu;
        // 0x1ad570: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad56c) {
            ctx->pc = 0x1AD58Cu;
            goto label_1ad58c;
        }
    }
    ctx->pc = 0x1AD574u;
label_1ad574:
    // 0x1ad574: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ad574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1ad578:
    // 0x1ad578: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ad57c:
    if (ctx->pc == 0x1AD57Cu) {
        ctx->pc = 0x1AD57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD578u;
        // 0x1ad57c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD580u;
        goto label_1ad580;
    }
    ctx->pc = 0x1AD578u;
    {
        const bool branch_taken_0x1ad578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD578u;
        // 0x1ad57c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad578) {
            ctx->pc = 0x1AD58Cu;
            goto label_1ad58c;
        }
    }
    ctx->pc = 0x1AD580u;
label_1ad580:
    // 0x1ad580: 0x60f809  jalr        $v1
label_1ad584:
    if (ctx->pc == 0x1AD584u) {
        ctx->pc = 0x1AD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD580u;
        // 0x1ad584: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD588u;
        goto label_1ad588;
    }
    ctx->pc = 0x1AD580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AD588u);
        ctx->pc = 0x1AD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD580u;
        // 0x1ad584: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD580u, 0x1AD588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD588u;
label_1ad588:
    // 0x1ad588: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ad588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ad58c:
    // 0x1ad58c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ad58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1ad590:
    // 0x1ad590: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ad590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad594:
    // 0x1ad594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad598:
    // 0x1ad598: 0x3e00008  jr          $ra
label_1ad59c:
    if (ctx->pc == 0x1AD59Cu) {
        ctx->pc = 0x1AD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD598u;
        // 0x1ad59c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD5A0u;
        goto label_fallthrough_0x1ad598;
    }
    ctx->pc = 0x1AD598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD598u;
        // 0x1ad59c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ad598:
    ctx->pc = 0x1AD5A0u;
}
