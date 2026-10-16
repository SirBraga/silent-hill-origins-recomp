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

// Function: sub_001F35C0
// Address: 0x1f35c0 - 0x1f3638
void sub_001F35C0_0x1f35c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F35C0_0x1f35c0");
#endif

    switch (ctx->pc) {
        case 0x1f35e4u: goto label_1f35e4;
        case 0x1f35fcu: goto label_1f35fc;
        case 0x1f3610u: goto label_1f3610;
        case 0x1f3620u: goto label_1f3620;
        case 0x1f3628u: goto label_1f3628;
        default: break;
    }

    ctx->pc = 0x1f35c0u;

    // 0x1f35c0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f35c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1f35c4: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1f35c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1f35c8: 0x8c62eacc  lw          $v0, -0x1534($v1)
    ctx->pc = 0x1f35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33EACCu));
    // 0x1f35cc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1f35ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1f35d0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F35D0u;
    {
        const bool branch_taken_0x1f35d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35D0u;
        // 0x1f35d4: 0xffbf0100  sd          $ra, 0x100($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35d0) {
            ctx->pc = 0x1F3628u;
            goto label_1f3628;
        }
    }
    ctx->pc = 0x1F35D8u;
    // 0x1f35d8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f35d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f35dc: 0xc07cc74  jal         func_1F31D0
    ctx->pc = 0x1F35DCu;
    SET_GPR_U32(ctx, 31, 0x1F35E4u);
    ctx->pc = 0x1F35E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35DCu;
    // 0x1f35e0: 0xac70eacc  sw          $s0, -0x1534($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961868), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F31D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F31D0u, 0x1F35DCu, 0x1F35E4u)) {
        return;
    }
    ctx->pc = 0x1F35E4u;
label_1f35e4:
    // 0x1f35e4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f35e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1f35e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f35e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35ec: 0x24842580  addiu       $a0, $a0, 0x2580
    ctx->pc = 0x1f35ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9600));
    // 0x1f35f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f35f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35f4: 0xc07cc10  jal         func_1F3040
    ctx->pc = 0x1F35F4u;
    SET_GPR_U32(ctx, 31, 0x1F35FCu);
    ctx->pc = 0x1F35F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35F4u;
    // 0x1f35f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3040u, 0x1F35F4u, 0x1F35FCu)) {
        return;
    }
    ctx->pc = 0x1F35FCu;
label_1f35fc:
    // 0x1f35fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F35FCu;
    {
        const bool branch_taken_0x1f35fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35FCu;
        // 0x1f3600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35fc) {
            ctx->pc = 0x1F3614u;
            goto label_1f3614;
        }
    }
    ctx->pc = 0x1F3604u;
    // 0x1f3604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3608: 0xc0814aa  jal         func_2052A8
    ctx->pc = 0x1F3608u;
    SET_GPR_U32(ctx, 31, 0x1F3610u);
    ctx->pc = 0x1F360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3608u;
    // 0x1f360c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2052A8u, 0x1F3608u, 0x1F3610u)) {
        return;
    }
    ctx->pc = 0x1F3610u;
label_1f3610:
    // 0x1f3610: 0xac500024  sw          $s0, 0x24($v0)
    ctx->pc = 0x1f3610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 16));
label_1f3614:
    // 0x1f3614: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1f3614u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1f3618: 0xc06c928  jal         func_1B24A0
    ctx->pc = 0x1F3618u;
    SET_GPR_U32(ctx, 31, 0x1F3620u);
    ctx->pc = 0x1F361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3618u;
    // 0x1f361c: 0x8e049168  lw          $a0, -0x6E98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B24A0u, 0x1F3618u, 0x1F3620u)) {
        return;
    }
    ctx->pc = 0x1F3620u;
label_1f3620:
    // 0x1f3620: 0xc06bf56  jal         func_1AFD58
    ctx->pc = 0x1F3620u;
    SET_GPR_U32(ctx, 31, 0x1F3628u);
    ctx->pc = 0x1F3624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3620u;
    // 0x1f3624: 0x8e049168  lw          $a0, -0x6E98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFD58u, 0x1F3620u, 0x1F3628u)) {
        return;
    }
    ctx->pc = 0x1F3628u;
label_1f3628:
    // 0x1f3628: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1f3628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f362c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1f362cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f3630: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3630u;
        // 0x1f3634: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3638u;
}
