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

// Function: sub_001D2118
// Address: 0x1d2118 - 0x1d2190
void sub_001D2118_0x1d2118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2118_0x1d2118");
#endif

    switch (ctx->pc) {
        case 0x1d2150u: goto label_1d2150;
        case 0x1d2184u: goto label_1d2184;
        default: break;
    }

    ctx->pc = 0x1d2118u;

    // 0x1d2118: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d2118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d211c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d211cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2120: 0x8c449b30  lw          $a0, -0x64D0($v0)
    ctx->pc = 0x1d2120u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339B30u));
    // 0x1d2124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2128: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D2128u;
    {
        const bool branch_taken_0x1d2128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2128u;
        // 0x1d212c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2128) {
            ctx->pc = 0x1D2158u;
            goto label_1d2158;
        }
    }
    ctx->pc = 0x1D2130u;
    // 0x1d2130: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d2130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d2134: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d2134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d2138: 0x24420d38  addiu       $v0, $v0, 0xD38
    ctx->pc = 0x1d2138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3384));
    // 0x1d213c: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x1d213cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x1d2140: 0xac629b14  sw          $v0, -0x64EC($v1)
    ctx->pc = 0x1d2140u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x339B14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339B14u, _value); } while (0);
    // 0x1d2144: 0x24842018  addiu       $a0, $a0, 0x2018
    ctx->pc = 0x1d2144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8216));
    // 0x1d2148: 0xc074bfe  jal         func_1D2FF8
    ctx->pc = 0x1D2148u;
    SET_GPR_U32(ctx, 31, 0x1D2150u);
    ctx->pc = 0x1D214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2148u;
    // 0x1d214c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2FF8u, 0x1D2148u, 0x1D2150u)) {
        return;
    }
    ctx->pc = 0x1D2150u;
label_1d2150:
    // 0x1d2150: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D2150u;
    {
        const bool branch_taken_0x1d2150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2150u;
        // 0x1d2154: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2150) {
            ctx->pc = 0x1D2188u;
            goto label_1d2188;
        }
    }
    ctx->pc = 0x1D2158u;
label_1d2158:
    // 0x1d2158: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d2158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d215c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D215Cu;
    {
        const bool branch_taken_0x1d215c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D2160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D215Cu;
        // 0x1d2160: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d215c) {
            ctx->pc = 0x1D2188u;
            goto label_1d2188;
        }
    }
    ctx->pc = 0x1D2164u;
    // 0x1d2164: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d2164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d2168: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d2168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d216c: 0x24420d48  addiu       $v0, $v0, 0xD48
    ctx->pc = 0x1d216cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3400));
    // 0x1d2170: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x1d2170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x1d2174: 0xac629b14  sw          $v0, -0x64EC($v1)
    ctx->pc = 0x1d2174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x339B14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339B14u, _value); } while (0);
    // 0x1d2178: 0x24842018  addiu       $a0, $a0, 0x2018
    ctx->pc = 0x1d2178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8216));
    // 0x1d217c: 0xc074c12  jal         func_1D3048
    ctx->pc = 0x1D217Cu;
    SET_GPR_U32(ctx, 31, 0x1D2184u);
    ctx->pc = 0x1D2180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D217Cu;
    // 0x1d2180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3048u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D3048u, 0x1D217Cu, 0x1D2184u)) {
        return;
    }
    ctx->pc = 0x1D2184u;
label_1d2184:
    // 0x1d2184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2188:
    // 0x1d2188: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2188u;
        // 0x1d218c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2190u;
}
