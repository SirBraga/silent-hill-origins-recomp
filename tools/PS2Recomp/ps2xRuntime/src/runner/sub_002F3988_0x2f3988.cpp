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

// Function: sub_002F3988
// Address: 0x2f3988 - 0x2f3a30
void sub_002F3988_0x2f3988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3988_0x2f3988");
#endif

    switch (ctx->pc) {
        case 0x2f399cu: goto label_2f399c;
        case 0x2f39acu: goto label_2f39ac;
        case 0x2f39fcu: goto label_2f39fc;
        case 0x2f3a18u: goto label_2f3a18;
        default: break;
    }

    ctx->pc = 0x2f3988u;

    // 0x2f3988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f3988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f398c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f398cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f3990: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f3990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f3994: 0xc0bdf7a  jal         func_2F7DE8
    ctx->pc = 0x2F3994u;
    SET_GPR_U32(ctx, 31, 0x2F399Cu);
    ctx->pc = 0x2F3998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3994u;
    // 0x2f3998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7DE8u, 0x2F3994u, 0x2F399Cu)) {
        return;
    }
    ctx->pc = 0x2F399Cu;
label_2f399c:
    // 0x2f399c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F399Cu;
    {
        const bool branch_taken_0x2f399c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f399c) {
            ctx->pc = 0x2F3A04u;
            goto label_2f3a04;
        }
    }
    ctx->pc = 0x2F39A4u;
    // 0x2f39a4: 0xc0bd94e  jal         func_2F6538
    ctx->pc = 0x2F39A4u;
    SET_GPR_U32(ctx, 31, 0x2F39ACu);
    ctx->pc = 0x2F39A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F39A4u;
    // 0x2f39a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6538u, 0x2F39A4u, 0x2F39ACu)) {
        return;
    }
    ctx->pc = 0x2F39ACu;
label_2f39ac:
    // 0x2f39ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F39ACu;
    {
        const bool branch_taken_0x2f39ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39ACu;
        // 0x2f39b0: 0x3c030072  lui         $v1, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39ac) {
            ctx->pc = 0x2F39D4u;
            goto label_2f39d4;
        }
    }
    ctx->pc = 0x2F39B4u;
    // 0x2f39b4: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x2f39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f39b8: 0x2022818  mult        $a1, $s0, $v0
    ctx->pc = 0x2f39b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2f39bc: 0x2466b748  addiu       $a2, $v1, -0x48B8
    ctx->pc = 0x2f39bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948680));
    // 0x2f39c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f39c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f39c4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2f39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f39c8: 0x8c430888  lw          $v1, 0x888($v0)
    ctx->pc = 0x2f39c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2184)));
    // 0x2f39cc: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F39CCu;
    {
        const bool branch_taken_0x2f39cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f39cc) {
            ctx->pc = 0x2F39D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F39CCu;
            // 0x2f39d0: 0x8c43088c  lw          $v1, 0x88C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F39E0u;
            goto label_2f39e0;
        }
    }
    ctx->pc = 0x2F39D4u;
label_2f39d4:
    // 0x2f39d4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f39d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F39D8u;
    {
        const bool branch_taken_0x2f39d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39D8u;
        // 0x2f39dc: 0x34429003  ori         $v0, $v0, 0x9003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36867);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39d8) {
            ctx->pc = 0x2F3A1Cu;
            goto label_2f3a1c;
        }
    }
    ctx->pc = 0x2F39E0u;
label_2f39e0:
    // 0x2f39e0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F39E0u;
    {
        const bool branch_taken_0x2f39e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f39e0) {
            ctx->pc = 0x2F39F4u;
            goto label_2f39f4;
        }
    }
    ctx->pc = 0x2F39E8u;
    // 0x2f39e8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f39ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F39ECu;
    {
        const bool branch_taken_0x2f39ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F39F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39ECu;
        // 0x2f39f0: 0x3442002f  ori         $v0, $v0, 0x2F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39ec) {
            ctx->pc = 0x2F3A1Cu;
            goto label_2f3a1c;
        }
    }
    ctx->pc = 0x2F39F4u;
label_2f39f4:
    // 0x2f39f4: 0xc0bd956  jal         func_2F6558
    ctx->pc = 0x2F39F4u;
    SET_GPR_U32(ctx, 31, 0x2F39FCu);
    ctx->pc = 0x2F39F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F39F4u;
    // 0x2f39f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6558u, 0x2F39F4u, 0x2F39FCu)) {
        return;
    }
    ctx->pc = 0x2F39FCu;
label_2f39fc:
    // 0x2f39fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F39FCu;
    {
        const bool branch_taken_0x2f39fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f39fc) {
            ctx->pc = 0x2F3A10u;
            goto label_2f3a10;
        }
    }
    ctx->pc = 0x2F3A04u;
label_2f3a04:
    // 0x2f3a04: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f3a08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3A08u;
    {
        const bool branch_taken_0x2f3a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A08u;
        // 0x2f3a0c: 0x34420013  ori         $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a08) {
            ctx->pc = 0x2F3A1Cu;
            goto label_2f3a1c;
        }
    }
    ctx->pc = 0x2F3A10u;
label_2f3a10:
    // 0x2f3a10: 0xc0bddca  jal         func_2F7728
    ctx->pc = 0x2F3A10u;
    SET_GPR_U32(ctx, 31, 0x2F3A18u);
    ctx->pc = 0x2F3A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A10u;
    // 0x2f3a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7728u, 0x2F3A10u, 0x2F3A18u)) {
        return;
    }
    ctx->pc = 0x2F3A18u;
label_2f3a18:
    // 0x2f3a18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f3a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3a1c:
    // 0x2f3a1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f3a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f3a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A24u;
        // 0x2f3a28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3A2Cu;
    // 0x2f3a2c: 0x0  nop
    ctx->pc = 0x2f3a2cu;
    // NOP
    ctx->pc = 0x2f3a30u;
}
