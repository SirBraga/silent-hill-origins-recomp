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

// Function: sub_002385A0
// Address: 0x2385a0 - 0x238668
void sub_002385A0_0x2385a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002385A0_0x2385a0");
#endif

    switch (ctx->pc) {
        case 0x2385c0u: goto label_2385c0;
        case 0x2385ecu: goto label_2385ec;
        case 0x238618u: goto label_238618;
        case 0x23864cu: goto label_23864c;
        default: break;
    }

    ctx->pc = 0x2385a0u;

    // 0x2385a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2385a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2385a4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2385a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2385a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2385a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2385ac: 0x2405040c  addiu       $a1, $zero, 0x40C
    ctx->pc = 0x2385acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x2385b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2385b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2385b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2385b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2385b8: 0xc08a11e  jal         func_228478
    ctx->pc = 0x2385B8u;
    SET_GPR_U32(ctx, 31, 0x2385C0u);
    ctx->pc = 0x2385BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385B8u;
    // 0x2385bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228478u, 0x2385B8u, 0x2385C0u)) {
        return;
    }
    ctx->pc = 0x2385C0u;
label_2385c0:
    // 0x2385c0: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x2385c0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2385c4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2385c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2385c8: 0xac22416c  sw          $v0, 0x416C($at)
    ctx->pc = 0x2385c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B416Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B416Cu, _value); } while (0);
    // 0x2385cc: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2385ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2385d0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2385D0u;
    {
        const bool branch_taken_0x2385d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2385D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385D0u;
        // 0x2385d4: 0x2405040c  addiu       $a1, $zero, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385d0) {
            ctx->pc = 0x23865Cu;
            goto label_23865c;
        }
    }
    ctx->pc = 0x2385D8u;
    // 0x2385d8: 0x240400d8  addiu       $a0, $zero, 0xD8
    ctx->pc = 0x2385d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x2385dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2385dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2385e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2385e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2385e4: 0xc089470  jal         func_2251C0
    ctx->pc = 0x2385E4u;
    SET_GPR_U32(ctx, 31, 0x2385ECu);
    ctx->pc = 0x2385E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385E4u;
    // 0x2385e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2251C0u, 0x2385E4u, 0x2385ECu)) {
        return;
    }
    ctx->pc = 0x2385ECu;
label_2385ec:
    // 0x2385ec: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x2385ecu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2385f0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2385f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2385f4: 0xac224170  sw          $v0, 0x4170($at)
    ctx->pc = 0x2385f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4170u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4170u, _value); } while (0);
    // 0x2385f8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2385f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2385fc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2385FCu;
    {
        const bool branch_taken_0x2385fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385FCu;
        // 0x238600: 0x24050110  addiu       $a1, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385fc) {
            ctx->pc = 0x23865Cu;
            goto label_23865c;
        }
    }
    ctx->pc = 0x238604u;
    // 0x238604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x238604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x238608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23860c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23860cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238610: 0xc08ac7a  jal         func_22B1E8
    ctx->pc = 0x238610u;
    SET_GPR_U32(ctx, 31, 0x238618u);
    ctx->pc = 0x238614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238610u;
    // 0x238614: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B1E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B1E8u, 0x238610u, 0x238618u)) {
        return;
    }
    ctx->pc = 0x238618u;
label_238618:
    // 0x238618: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x238618u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23861c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23861cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x238620: 0xac223f28  sw          $v0, 0x3F28($at)
    ctx->pc = 0x238620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3F28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F28u, _value); } while (0);
    // 0x238624: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x238624u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x238628: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x238628u;
    {
        const bool branch_taken_0x238628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238628u;
        // 0x23862c: 0x3c050023  lui         $a1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238628) {
            ctx->pc = 0x23865Cu;
            goto label_23865c;
        }
    }
    ctx->pc = 0x238630u;
    // 0x238630: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x238630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x238634: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x238634u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
    // 0x238638: 0x24a51698  addiu       $a1, $a1, 0x1698
    ctx->pc = 0x238638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5784));
    // 0x23863c: 0x24c61710  addiu       $a2, $a2, 0x1710
    ctx->pc = 0x23863cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5904));
    // 0x238640: 0x24e71768  addiu       $a3, $a3, 0x1768
    ctx->pc = 0x238640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5992));
    // 0x238644: 0xc088c90  jal         func_223240
    ctx->pc = 0x238644u;
    SET_GPR_U32(ctx, 31, 0x23864Cu);
    ctx->pc = 0x238648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238644u;
    // 0x238648: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x223240u, 0x238644u, 0x23864Cu)) {
        return;
    }
    ctx->pc = 0x23864Cu;
label_23864c:
    // 0x23864c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23864cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x238650: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x238654: 0xac223f28  sw          $v0, 0x3F28($at)
    ctx->pc = 0x238654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3F28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F28u, _value); } while (0);
    // 0x238658: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x238658u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_23865c:
    // 0x23865c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23865cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238660: 0x3e00008  jr          $ra
    ctx->pc = 0x238660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238660u;
        // 0x238664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238668u;
}
