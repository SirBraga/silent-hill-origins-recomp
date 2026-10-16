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

// Function: sub_001F9948
// Address: 0x1f9948 - 0x1f99bc
void sub_001F9948_0x1f9948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9948_0x1f9948");
#endif

    switch (ctx->pc) {
        case 0x1f9948u: goto label_1f9948;
        case 0x1f994cu: goto label_1f994c;
        case 0x1f9950u: goto label_1f9950;
        case 0x1f9954u: goto label_1f9954;
        case 0x1f9958u: goto label_1f9958;
        case 0x1f995cu: goto label_1f995c;
        case 0x1f9960u: goto label_1f9960;
        case 0x1f9964u: goto label_1f9964;
        case 0x1f9968u: goto label_1f9968;
        case 0x1f996cu: goto label_1f996c;
        case 0x1f9970u: goto label_1f9970;
        case 0x1f9974u: goto label_1f9974;
        case 0x1f9978u: goto label_1f9978;
        case 0x1f997cu: goto label_1f997c;
        case 0x1f9980u: goto label_1f9980;
        case 0x1f9984u: goto label_1f9984;
        case 0x1f9988u: goto label_1f9988;
        case 0x1f998cu: goto label_1f998c;
        case 0x1f9990u: goto label_1f9990;
        case 0x1f9994u: goto label_1f9994;
        case 0x1f9998u: goto label_1f9998;
        case 0x1f999cu: goto label_1f999c;
        case 0x1f99a0u: goto label_1f99a0;
        case 0x1f99a4u: goto label_1f99a4;
        case 0x1f99a8u: goto label_1f99a8;
        case 0x1f99acu: goto label_1f99ac;
        case 0x1f99b0u: goto label_1f99b0;
        case 0x1f99b4u: goto label_1f99b4;
        case 0x1f99b8u: goto label_1f99b8;
        default: break;
    }

    ctx->pc = 0x1f9948u;

label_1f9948:
    // 0x1f9948: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f9948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f994c:
    // 0x1f994c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f994cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f9950:
    // 0x1f9950: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f9950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1f9954:
    // 0x1f9954: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f9954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f9958:
    // 0x1f9958: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f9958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1f995c:
    // 0x1f995c: 0x24512e98  addiu       $s1, $v0, 0x2E98
    ctx->pc = 0x1f995cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11928));
label_1f9960:
    // 0x1f9960: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f9960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f9964:
    // 0x1f9964: 0x3c12006a  lui         $s2, 0x6A
    ctx->pc = 0x1f9964u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)106 << 16));
label_1f9968:
    // 0x1f9968: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f9968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1f996c:
    // 0x1f996c: 0xc07e534  jal         func_1F94D0
label_1f9970:
    if (ctx->pc == 0x1F9970u) {
        ctx->pc = 0x1F9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F996Cu;
        // 0x1f9970: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9974u;
        goto label_1f9974;
    }
    ctx->pc = 0x1F996Cu;
    SET_GPR_U32(ctx, 31, 0x1F9974u);
    ctx->pc = 0x1F9970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F996Cu;
    // 0x1f9970: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F94D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F94D0u, 0x1F996Cu, 0x1F9974u)) {
        return;
    }
    ctx->pc = 0x1F9974u;
label_1f9974:
    // 0x1f9974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9978:
    // 0x1f9978: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f997c:
    if (ctx->pc == 0x1F997Cu) {
        ctx->pc = 0x1F997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9978u;
        // 0x1f997c: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9980u;
        goto label_1f9980;
    }
    ctx->pc = 0x1F9978u;
    {
        const bool branch_taken_0x1f9978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9978u;
        // 0x1f997c: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9978) {
            ctx->pc = 0x1F9988u;
            goto label_1f9988;
        }
    }
    ctx->pc = 0x1F9980u;
label_1f9980:
    // 0x1f9980: 0xc07e3f2  jal         func_1F8FC8
label_1f9984:
    if (ctx->pc == 0x1F9984u) {
        ctx->pc = 0x1F9988u;
        goto label_1f9988;
    }
    ctx->pc = 0x1F9980u;
    SET_GPR_U32(ctx, 31, 0x1F9988u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F9980u, 0x1F9988u)) {
        return;
    }
    ctx->pc = 0x1F9988u;
label_1f9988:
    // 0x1f9988: 0x26422cf8  addiu       $v0, $s2, 0x2CF8
    ctx->pc = 0x1f9988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11512));
label_1f998c:
    // 0x1f998c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f998cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1f9990:
    // 0x1f9990: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f9990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9994:
    // 0x1f9994: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f9998:
    // 0x1f9998: 0x40f809  jalr        $v0
label_1f999c:
    if (ctx->pc == 0x1F999Cu) {
        ctx->pc = 0x1F99A0u;
        goto label_1f99a0;
    }
    ctx->pc = 0x1F9998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F99A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9998u, 0x1F99A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F99A0u;
label_1f99a0:
    // 0x1f99a0: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1f99a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
label_1f99a4:
    // 0x1f99a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f99a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f99a8:
    // 0x1f99a8: 0x24c6b0a0  addiu       $a2, $a2, -0x4F60
    ctx->pc = 0x1f99a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946976));
label_1f99ac:
    // 0x1f99ac: 0xc07e562  jal         func_1F9588
label_1f99b0:
    if (ctx->pc == 0x1F99B0u) {
        ctx->pc = 0x1F99B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99ACu;
        // 0x1f99b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F99B4u;
        goto label_1f99b4;
    }
    ctx->pc = 0x1F99ACu;
    SET_GPR_U32(ctx, 31, 0x1F99B4u);
    ctx->pc = 0x1F99B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F99ACu;
    // 0x1f99b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9588u, 0x1F99ACu, 0x1F99B4u)) {
        return;
    }
    ctx->pc = 0x1F99B4u;
label_1f99b4:
    // 0x1f99b4: 0xc07e3f2  jal         func_1F8FC8
label_1f99b8:
    if (ctx->pc == 0x1F99B8u) {
        ctx->pc = 0x1F99BCu;
        goto label_fallthrough_0x1f99b4;
    }
    ctx->pc = 0x1F99B4u;
    SET_GPR_U32(ctx, 31, 0x1F99BCu);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F99B4u, 0x1F99BCu)) {
        return;
    }
label_fallthrough_0x1f99b4:
    ctx->pc = 0x1F99BCu;
}
