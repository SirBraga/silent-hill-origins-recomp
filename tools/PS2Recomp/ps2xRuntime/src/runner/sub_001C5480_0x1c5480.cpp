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

// Function: sub_001C5480
// Address: 0x1c5480 - 0x1c5550
void sub_001C5480_0x1c5480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5480_0x1c5480");
#endif

    switch (ctx->pc) {
        case 0x1c5480u: goto label_1c5480;
        case 0x1c5484u: goto label_1c5484;
        case 0x1c5488u: goto label_1c5488;
        case 0x1c548cu: goto label_1c548c;
        case 0x1c5490u: goto label_1c5490;
        case 0x1c5494u: goto label_1c5494;
        case 0x1c5498u: goto label_1c5498;
        case 0x1c549cu: goto label_1c549c;
        case 0x1c54a0u: goto label_1c54a0;
        case 0x1c54a4u: goto label_1c54a4;
        case 0x1c54a8u: goto label_1c54a8;
        case 0x1c54acu: goto label_1c54ac;
        case 0x1c54b0u: goto label_1c54b0;
        case 0x1c54b4u: goto label_1c54b4;
        case 0x1c54b8u: goto label_1c54b8;
        case 0x1c54bcu: goto label_1c54bc;
        case 0x1c54c0u: goto label_1c54c0;
        case 0x1c54c4u: goto label_1c54c4;
        case 0x1c54c8u: goto label_1c54c8;
        case 0x1c54ccu: goto label_1c54cc;
        case 0x1c54d0u: goto label_1c54d0;
        case 0x1c54d4u: goto label_1c54d4;
        case 0x1c54d8u: goto label_1c54d8;
        case 0x1c54dcu: goto label_1c54dc;
        case 0x1c54e0u: goto label_1c54e0;
        case 0x1c54e4u: goto label_1c54e4;
        case 0x1c54e8u: goto label_1c54e8;
        case 0x1c54ecu: goto label_1c54ec;
        case 0x1c54f0u: goto label_1c54f0;
        case 0x1c54f4u: goto label_1c54f4;
        case 0x1c54f8u: goto label_1c54f8;
        case 0x1c54fcu: goto label_1c54fc;
        case 0x1c5500u: goto label_1c5500;
        case 0x1c5504u: goto label_1c5504;
        case 0x1c5508u: goto label_1c5508;
        case 0x1c550cu: goto label_1c550c;
        case 0x1c5510u: goto label_1c5510;
        case 0x1c5514u: goto label_1c5514;
        case 0x1c5518u: goto label_1c5518;
        case 0x1c551cu: goto label_1c551c;
        case 0x1c5520u: goto label_1c5520;
        case 0x1c5524u: goto label_1c5524;
        case 0x1c5528u: goto label_1c5528;
        case 0x1c552cu: goto label_1c552c;
        case 0x1c5530u: goto label_1c5530;
        case 0x1c5534u: goto label_1c5534;
        case 0x1c5538u: goto label_1c5538;
        case 0x1c553cu: goto label_1c553c;
        case 0x1c5540u: goto label_1c5540;
        case 0x1c5544u: goto label_1c5544;
        case 0x1c5548u: goto label_1c5548;
        case 0x1c554cu: goto label_1c554c;
        default: break;
    }

    ctx->pc = 0x1c5480u;

label_1c5480:
    // 0x1c5480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c5484:
    // 0x1c5484: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c5484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c5488:
    // 0x1c5488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c548c:
    // 0x1c548c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c548cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c5490:
    // 0x1c5490: 0xc0715ca  jal         func_1C5728
label_1c5494:
    if (ctx->pc == 0x1C5494u) {
        ctx->pc = 0x1C5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5490u;
        // 0x1c5494: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5498u;
        goto label_1c5498;
    }
    ctx->pc = 0x1C5490u;
    SET_GPR_U32(ctx, 31, 0x1C5498u);
    ctx->pc = 0x1C5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5490u;
    // 0x1c5494: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C5728u, 0x1C5490u, 0x1C5498u)) {
        return;
    }
    ctx->pc = 0x1C5498u;
label_1c5498:
    // 0x1c5498: 0x8e0503cc  lw          $a1, 0x3CC($s0)
    ctx->pc = 0x1c5498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 972)));
label_1c549c:
    // 0x1c549c: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
label_1c54a0:
    if (ctx->pc == 0x1C54A0u) {
        ctx->pc = 0x1C54A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C549Cu;
        // 0x1c54a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54A4u;
        goto label_1c54a4;
    }
    ctx->pc = 0x1C549Cu;
    {
        const bool branch_taken_0x1c549c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c549c) {
            ctx->pc = 0x1C54A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C549Cu;
            // 0x1c54a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C54DCu;
            goto label_1c54dc;
        }
    }
    ctx->pc = 0x1C54A4u;
label_1c54a4:
    // 0x1c54a4: 0x8e0203c0  lw          $v0, 0x3C0($s0)
    ctx->pc = 0x1c54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
label_1c54a8:
    // 0x1c54a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c54ac:
    if (ctx->pc == 0x1C54ACu) {
        ctx->pc = 0x1C54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54A8u;
        // 0x1c54ac: 0x8ca20034  lw          $v0, 0x34($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54B0u;
        goto label_1c54b0;
    }
    ctx->pc = 0x1C54A8u;
    {
        const bool branch_taken_0x1c54a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54A8u;
        // 0x1c54ac: 0x8ca20034  lw          $v0, 0x34($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54a8) {
            ctx->pc = 0x1C54C8u;
            goto label_1c54c8;
        }
    }
    ctx->pc = 0x1C54B0u;
label_1c54b0:
    // 0x1c54b0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1c54b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1c54b4:
    // 0x1c54b4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1c54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1c54b8:
    // 0x1c54b8: 0x60f809  jalr        $v1
label_1c54bc:
    if (ctx->pc == 0x1C54BCu) {
        ctx->pc = 0x1C54BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54B8u;
        // 0x1c54bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54C0u;
        goto label_1c54c0;
    }
    ctx->pc = 0x1C54B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C54C0u);
        ctx->pc = 0x1C54BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54B8u;
        // 0x1c54bc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C54B8u, 0x1C54C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C54C0u;
label_1c54c0:
    // 0x1c54c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c54c4:
    if (ctx->pc == 0x1C54C4u) {
        ctx->pc = 0x1C54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54C0u;
        // 0x1c54c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54C8u;
        goto label_1c54c8;
    }
    ctx->pc = 0x1C54C0u;
    {
        const bool branch_taken_0x1c54c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54C0u;
        // 0x1c54c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54c0) {
            ctx->pc = 0x1C54DCu;
            goto label_1c54dc;
        }
    }
    ctx->pc = 0x1C54C8u;
label_1c54c8:
    // 0x1c54c8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1c54c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1c54cc:
    // 0x1c54cc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1c54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1c54d0:
    // 0x1c54d0: 0x60f809  jalr        $v1
label_1c54d4:
    if (ctx->pc == 0x1C54D4u) {
        ctx->pc = 0x1C54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54D0u;
        // 0x1c54d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54D8u;
        goto label_1c54d8;
    }
    ctx->pc = 0x1C54D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C54D8u);
        ctx->pc = 0x1C54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54D0u;
        // 0x1c54d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C54D0u, 0x1C54D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C54D8u;
label_1c54d8:
    // 0x1c54d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c54d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c54dc:
    // 0x1c54dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c54dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c54e0:
    // 0x1c54e0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c54e4:
    // 0x1c54e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c54e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c54e8:
    // 0x1c54e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c54e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c54ec:
    // 0x1c54ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c54f0:
    // 0x1c54f0: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1c54f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_1c54f4:
    // 0x1c54f4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1c54f8:
    if (ctx->pc == 0x1C54F8u) {
        ctx->pc = 0x1C54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54F4u;
        // 0x1c54f8: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C54FCu;
        goto label_1c54fc;
    }
    ctx->pc = 0x1C54F4u;
    {
        const bool branch_taken_0x1c54f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C54F4u;
        // 0x1c54f8: 0xac4601d0  sw          $a2, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54f4) {
            ctx->pc = 0x1C54E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c54e0;
        }
    }
    ctx->pc = 0x1C54FCu;
label_1c54fc:
    // 0x1c54fc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c5500:
    // 0x1c5500: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5504:
    // 0x1c5504: 0xac4400f4  sw          $a0, 0xF4($v0)
    ctx->pc = 0x1c5504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 4));
label_1c5508:
    // 0x1c5508: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c5508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c550c:
    // 0x1c550c: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x1c550cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
label_1c5510:
    // 0x1c5510: 0x8e0203c0  lw          $v0, 0x3C0($s0)
    ctx->pc = 0x1c5510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
label_1c5514:
    // 0x1c5514: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c5518:
    if (ctx->pc == 0x1C5518u) {
        ctx->pc = 0x1C5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5514u;
        // 0x1c5518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C551Cu;
        goto label_1c551c;
    }
    ctx->pc = 0x1C5514u;
    {
        const bool branch_taken_0x1c5514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5514u;
        // 0x1c5518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5514) {
            ctx->pc = 0x1C5534u;
            goto label_1c5534;
        }
    }
    ctx->pc = 0x1C551Cu;
label_1c551c:
    // 0x1c551c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c5520:
    // 0x1c5520: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1c5520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c5524:
    // 0x1c5524: 0xc0c493d  jal         func_3124F4
label_1c5528:
    if (ctx->pc == 0x1C5528u) {
        ctx->pc = 0x1C5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5524u;
        // 0x1c5528: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C552Cu;
        goto label_1c552c;
    }
    ctx->pc = 0x1C5524u;
    SET_GPR_U32(ctx, 31, 0x1C552Cu);
    ctx->pc = 0x1C5528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5524u;
    // 0x1c5528: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C5524u, 0x1C552Cu)) {
        return;
    }
    ctx->pc = 0x1C552Cu;
label_1c552c:
    // 0x1c552c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c5530:
    if (ctx->pc == 0x1C5530u) {
        ctx->pc = 0x1C5530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C552Cu;
        // 0x1c5530: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5534u;
        goto label_1c5534;
    }
    ctx->pc = 0x1C552Cu;
    {
        const bool branch_taken_0x1c552c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C552Cu;
        // 0x1c5530: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c552c) {
            ctx->pc = 0x1C5540u;
            goto label_1c5540;
        }
    }
    ctx->pc = 0x1C5534u;
label_1c5534:
    // 0x1c5534: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c5534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c5538:
    // 0x1c5538: 0xac4401d0  sw          $a0, 0x1D0($v0)
    ctx->pc = 0x1c5538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 4));
label_1c553c:
    // 0x1c553c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c553cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c5540:
    // 0x1c5540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5544:
    // 0x1c5544: 0x3e00008  jr          $ra
label_1c5548:
    if (ctx->pc == 0x1C5548u) {
        ctx->pc = 0x1C5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5544u;
        // 0x1c5548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C554Cu;
        goto label_1c554c;
    }
    ctx->pc = 0x1C5544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5544u;
        // 0x1c5548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C554Cu;
label_1c554c:
    // 0x1c554c: 0x0  nop
    ctx->pc = 0x1c554cu;
    // NOP
    ctx->pc = 0x1c5550u;
}
