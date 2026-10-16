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

// Function: sub_001844F8
// Address: 0x1844f8 - 0x184570
void sub_001844F8_0x1844f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001844F8_0x1844f8");
#endif

    switch (ctx->pc) {
        case 0x184520u: goto label_184520;
        case 0x184544u: goto label_184544;
        case 0x18455cu: goto label_18455c;
        default: break;
    }

    ctx->pc = 0x1844f8u;

    // 0x1844f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1844f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1844fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1844fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x184500: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x184500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x184504: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x184504u;
    {
        const bool branch_taken_0x184504 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x184508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184504u;
        // 0x184508: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184504) {
            ctx->pc = 0x18455Cu;
            goto label_18455c;
        }
    }
    ctx->pc = 0x18450Cu;
    // 0x18450c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x18450Cu;
    {
        const bool branch_taken_0x18450c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x184510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18450Cu;
        // 0x184510: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18450c) {
            ctx->pc = 0x18454Cu;
            goto label_18454c;
        }
    }
    ctx->pc = 0x184514u;
    // 0x184514: 0x26108570  addiu       $s0, $s0, -0x7A90
    ctx->pc = 0x184514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935920));
    // 0x184518: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x184518u;
    SET_GPR_U32(ctx, 31, 0x184520u);
    ctx->pc = 0x18451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184518u;
    // 0x18451c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x184518u, 0x184520u)) {
        return;
    }
    ctx->pc = 0x184520u;
label_184520:
    // 0x184520: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x184520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x184524: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x184524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x184528: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x184528u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x18452c: 0xac623c18  sw          $v0, 0x3C18($v1)
    ctx->pc = 0x18452cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6C3C18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C3C18u, _value); } while (0);
    // 0x184530: 0x24843c20  addiu       $a0, $a0, 0x3C20
    ctx->pc = 0x184530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15392));
    // 0x184534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x184534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184538: 0x24c64570  addiu       $a2, $a2, 0x4570
    ctx->pc = 0x184538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17776));
    // 0x18453c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x18453Cu;
    SET_GPR_U32(ctx, 31, 0x184544u);
    ctx->pc = 0x184540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18453Cu;
    // 0x184540: 0x240714e0  addiu       $a3, $zero, 0x14E0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x18453Cu, 0x184544u)) {
        return;
    }
    ctx->pc = 0x184544u;
label_184544:
    // 0x184544: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x184544u;
    {
        const bool branch_taken_0x184544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184544u;
        // 0x184548: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184544) {
            ctx->pc = 0x184560u;
            goto label_184560;
        }
    }
    ctx->pc = 0x18454Cu;
label_18454c:
    // 0x18454c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x18454cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x184550: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x184550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x184554: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x184554u;
    SET_GPR_U32(ctx, 31, 0x18455Cu);
    ctx->pc = 0x184558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184554u;
    // 0x184558: 0x24843c20  addiu       $a0, $a0, 0x3C20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x184554u, 0x18455Cu)) {
        return;
    }
    ctx->pc = 0x18455Cu;
label_18455c:
    // 0x18455c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18455cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184560:
    // 0x184560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184564: 0x3e00008  jr          $ra
    ctx->pc = 0x184564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184564u;
        // 0x184568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18456Cu;
    // 0x18456c: 0x0  nop
    ctx->pc = 0x18456cu;
    // NOP
    ctx->pc = 0x184570u;
}
