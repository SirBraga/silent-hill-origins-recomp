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

// Function: sub_00327680
// Address: 0x327680 - 0x327718
void sub_00327680_0x327680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327680_0x327680");
#endif

    switch (ctx->pc) {
        case 0x327694u: goto label_327694;
        case 0x3276c0u: goto label_3276c0;
        case 0x3276dcu: goto label_3276dc;
        case 0x3276e4u: goto label_3276e4;
        case 0x3276ecu: goto label_3276ec;
        case 0x3276fcu: goto label_3276fc;
        default: break;
    }

    ctx->pc = 0x327680u;

    // 0x327680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32768c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x32768Cu;
    SET_GPR_U32(ctx, 31, 0x327694u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x32768Cu, 0x327694u)) {
        return;
    }
    ctx->pc = 0x327694u;
label_327694:
    // 0x327694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327698: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x327698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32769c: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x32769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x3276a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3276a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x3276a4: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x3276a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3276a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3276A8u;
    {
        const bool branch_taken_0x3276a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3276a8) {
            ctx->pc = 0x3276C8u;
            goto label_3276c8;
        }
    }
    ctx->pc = 0x3276B0u;
    // 0x3276b0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3276B0u;
    {
        const bool branch_taken_0x3276b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3276B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276B0u;
        // 0x3276b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276b0) {
            ctx->pc = 0x327700u;
            goto label_327700;
        }
    }
    ctx->pc = 0x3276B8u;
    // 0x3276b8: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x3276B8u;
    SET_GPR_U32(ctx, 31, 0x3276C0u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x3276B8u, 0x3276C0u)) {
        return;
    }
    ctx->pc = 0x3276C0u;
label_3276c0:
    // 0x3276c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3276C0u;
    {
        const bool branch_taken_0x3276c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3276C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276C0u;
        // 0x3276c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276c0) {
            ctx->pc = 0x327700u;
            goto label_327700;
        }
    }
    ctx->pc = 0x3276C8u;
label_3276c8:
    // 0x3276c8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3276c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3276cc: 0x3484f3ff  ori         $a0, $a0, 0xF3FF
    ctx->pc = 0x3276ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62463);
    // 0x3276d0: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x3276d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3276d4: 0xc0c9d40  jal         func_327500
    ctx->pc = 0x3276D4u;
    SET_GPR_U32(ctx, 31, 0x3276DCu);
    ctx->pc = 0x3276D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3276D4u;
    // 0x3276d8: 0x34840080  ori         $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x327500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327500u, 0x3276D4u, 0x3276DCu)) {
        return;
    }
    ctx->pc = 0x3276DCu;
label_3276dc:
    // 0x3276dc: 0xc0c9f04  jal         func_327C10
    ctx->pc = 0x3276DCu;
    SET_GPR_U32(ctx, 31, 0x3276E4u);
    ctx->pc = 0x327C10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327C10u, 0x3276DCu, 0x3276E4u)) {
        return;
    }
    ctx->pc = 0x3276E4u;
label_3276e4:
    // 0x3276e4: 0xc0c9dc6  jal         func_327718
    ctx->pc = 0x3276E4u;
    SET_GPR_U32(ctx, 31, 0x3276ECu);
    ctx->pc = 0x3276E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3276E4u;
    // 0x3276e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327718u, 0x3276E4u, 0x3276ECu)) {
        return;
    }
    ctx->pc = 0x3276ECu;
label_3276ec:
    // 0x3276ec: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3276ECu;
    {
        const bool branch_taken_0x3276ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3276F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276ECu;
        // 0x3276f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276ec) {
            ctx->pc = 0x327700u;
            goto label_327700;
        }
    }
    ctx->pc = 0x3276F4u;
    // 0x3276f4: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x3276F4u;
    SET_GPR_U32(ctx, 31, 0x3276FCu);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x3276F4u, 0x3276FCu)) {
        return;
    }
    ctx->pc = 0x3276FCu;
label_3276fc:
    // 0x3276fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3276fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327700:
    // 0x327700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327708: 0x3e00008  jr          $ra
    ctx->pc = 0x327708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327708u;
        // 0x32770c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327710u;
    // 0x327710: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x327710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x327714: 0x0  nop
    ctx->pc = 0x327714u;
    // NOP
    ctx->pc = 0x327718u;
}
