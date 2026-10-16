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

// Function: sub_00173208
// Address: 0x173208 - 0x173280
void sub_00173208_0x173208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173208_0x173208");
#endif

    switch (ctx->pc) {
        case 0x173230u: goto label_173230;
        case 0x173254u: goto label_173254;
        case 0x17326cu: goto label_17326c;
        default: break;
    }

    ctx->pc = 0x173208u;

    // 0x173208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17320c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17320cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x173210: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x173210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x173214: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x173214u;
    {
        const bool branch_taken_0x173214 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x173218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173214u;
        // 0x173218: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173214) {
            ctx->pc = 0x17326Cu;
            goto label_17326c;
        }
    }
    ctx->pc = 0x17321Cu;
    // 0x17321c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x17321Cu;
    {
        const bool branch_taken_0x17321c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17321Cu;
        // 0x173220: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17321c) {
            ctx->pc = 0x17325Cu;
            goto label_17325c;
        }
    }
    ctx->pc = 0x173224u;
    // 0x173224: 0x26105b88  addiu       $s0, $s0, 0x5B88
    ctx->pc = 0x173224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23432));
    // 0x173228: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x173228u;
    SET_GPR_U32(ctx, 31, 0x173230u);
    ctx->pc = 0x17322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173228u;
    // 0x17322c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x173228u, 0x173230u)) {
        return;
    }
    ctx->pc = 0x173230u;
label_173230:
    // 0x173230: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x173230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x173234: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x173234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x173238: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x173238u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x17323c: 0xac62f7a0  sw          $v0, -0x860($v1)
    ctx->pc = 0x17323cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF7A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF7A0u, _value); } while (0);
    // 0x173240: 0x2484f7a8  addiu       $a0, $a0, -0x858
    ctx->pc = 0x173240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
    // 0x173244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173248: 0x24c63280  addiu       $a2, $a2, 0x3280
    ctx->pc = 0x173248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12928));
    // 0x17324c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x17324Cu;
    SET_GPR_U32(ctx, 31, 0x173254u);
    ctx->pc = 0x173250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17324Cu;
    // 0x173250: 0x240700d0  addiu       $a3, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x17324Cu, 0x173254u)) {
        return;
    }
    ctx->pc = 0x173254u;
label_173254:
    // 0x173254: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x173254u;
    {
        const bool branch_taken_0x173254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173254u;
        // 0x173258: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173254) {
            ctx->pc = 0x173270u;
            goto label_173270;
        }
    }
    ctx->pc = 0x17325Cu;
label_17325c:
    // 0x17325c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17325cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x173260: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x173260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173264: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x173264u;
    SET_GPR_U32(ctx, 31, 0x17326Cu);
    ctx->pc = 0x173268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173264u;
    // 0x173268: 0x2484f7a8  addiu       $a0, $a0, -0x858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x173264u, 0x17326Cu)) {
        return;
    }
    ctx->pc = 0x17326Cu;
label_17326c:
    // 0x17326c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17326cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173270:
    // 0x173270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173274: 0x3e00008  jr          $ra
    ctx->pc = 0x173274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173274u;
        // 0x173278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17327Cu;
    // 0x17327c: 0x0  nop
    ctx->pc = 0x17327cu;
    // NOP
    ctx->pc = 0x173280u;
}
