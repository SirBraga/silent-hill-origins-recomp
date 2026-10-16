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

// Function: entry_3220c0
// Address: 0x3220c0 - 0x322160
void entry_3220c0_0x322160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_3220c0_0x322160");
#endif

    switch (ctx->pc) {
        case 0x3220d4u: goto label_3220d4;
        case 0x3220e8u: goto label_3220e8;
        case 0x322140u: goto label_322140;
        default: break;
    }

    ctx->pc = 0x3220c0u;

    // 0x3220c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3220c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3220c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3220c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3220c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3220c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3220cc: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x3220ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x3220d0: 0xc  syscall     0
    ctx->pc = 0x3220d0u;
    ctx->pc = 0x3220D4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3220d4:
    // 0x3220d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3220d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3220d8: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3220D8u;
    {
        const bool branch_taken_0x3220d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x3220DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220D8u;
        // 0x3220dc: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220d8) {
            ctx->pc = 0x3220F0u;
            goto label_3220f0;
        }
    }
    ctx->pc = 0x3220E0u;
    // 0x3220e0: 0xc0c8498  jal         func_321260
    ctx->pc = 0x3220E0u;
    SET_GPR_U32(ctx, 31, 0x3220E8u);
    ctx->pc = 0x321260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321260u, 0x3220E0u, 0x3220E8u)) {
        return;
    }
    ctx->pc = 0x3220E8u;
label_3220e8:
    // 0x3220e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3220E8u;
    {
        const bool branch_taken_0x3220e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3220ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220E8u;
        // 0x3220ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220e8) {
            ctx->pc = 0x322148u;
            goto label_322148;
        }
    }
    ctx->pc = 0x3220F0u;
label_3220f0:
    // 0x3220f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3220F0u;
    {
        const bool branch_taken_0x3220f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3220F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220F0u;
        // 0x3220f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220f0) {
            ctx->pc = 0x322104u;
            goto label_322104;
        }
    }
    ctx->pc = 0x3220F8u;
    // 0x3220f8: 0x8c437548  lw          $v1, 0x7548($v0)
    ctx->pc = 0x3220f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30024)));
    // 0x3220fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3220FCu;
    {
        const bool branch_taken_0x3220fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220FCu;
        // 0x322100: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220fc) {
            ctx->pc = 0x32210Cu;
            goto label_32210c;
        }
    }
    ctx->pc = 0x322104u;
label_322104:
    // 0x322104: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x322104u;
    {
        const bool branch_taken_0x322104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322104u;
        // 0x322108: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322104) {
            ctx->pc = 0x322144u;
            goto label_322144;
        }
    }
    ctx->pc = 0x32210Cu;
label_32210c:
    // 0x32210c: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x32210cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x322110: 0x246396c8  addiu       $v1, $v1, -0x6938
    ctx->pc = 0x322110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940360));
    // 0x322114: 0x8ca496c0  lw          $a0, -0x6940($a1)
    ctx->pc = 0x322114u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7296C0u));
    // 0x322118: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x322118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x32211c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x32211cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x322120: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x322120u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x322124: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x322124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x322128: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x322128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32212c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x32212cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x322130: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x322130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322134: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x322134u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x322138: 0xc0c84d4  jal         func_321350
    ctx->pc = 0x322138u;
    SET_GPR_U32(ctx, 31, 0x322140u);
    ctx->pc = 0x32213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322138u;
    // 0x32213c: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321350u, 0x322138u, 0x322140u)) {
        return;
    }
    ctx->pc = 0x322140u;
label_322140:
    // 0x322140: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x322140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322144:
    // 0x322144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_322148:
    // 0x322148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32214c: 0x3e00008  jr          $ra
    ctx->pc = 0x32214Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32214Cu;
        // 0x322150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32214Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322154u;
    // 0x322154: 0x0  nop
    ctx->pc = 0x322154u;
    // NOP
    // 0x322158: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x322158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32215c: 0x0  nop
    ctx->pc = 0x32215cu;
    // NOP
    ctx->pc = 0x322160u;
}
