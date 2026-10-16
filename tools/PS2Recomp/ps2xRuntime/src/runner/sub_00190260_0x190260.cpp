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

// Function: sub_00190260
// Address: 0x190260 - 0x1902b8
void sub_00190260_0x190260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190260_0x190260");
#endif

    switch (ctx->pc) {
        case 0x190274u: goto label_190274;
        case 0x19027cu: goto label_19027c;
        case 0x19028cu: goto label_19028c;
        default: break;
    }

    ctx->pc = 0x190260u;

    // 0x190260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190264: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x190264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x190268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19026c: 0xc063822  jal         func_18E088
    ctx->pc = 0x19026Cu;
    SET_GPR_U32(ctx, 31, 0x190274u);
    ctx->pc = 0x190270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19026Cu;
    // 0x190270: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18E088u, 0x19026Cu, 0x190274u)) {
        return;
    }
    ctx->pc = 0x190274u;
label_190274:
    // 0x190274: 0xc063c18  jal         func_18F060
    ctx->pc = 0x190274u;
    SET_GPR_U32(ctx, 31, 0x19027Cu);
    ctx->pc = 0x190278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190274u;
    // 0x190278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F060u, 0x190274u, 0x19027Cu)) {
        return;
    }
    ctx->pc = 0x19027Cu;
label_19027c:
    // 0x19027c: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x19027cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x190280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190284: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x190284u;
    SET_GPR_U32(ctx, 31, 0x19028Cu);
    ctx->pc = 0x190288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190284u;
    // 0x190288: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x190284u, 0x19028Cu)) {
        return;
    }
    ctx->pc = 0x19028Cu;
label_19028c:
    // 0x19028c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190294: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x190294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x190298: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x190298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19029c: 0x3e00008  jr          $ra
    ctx->pc = 0x19029Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1902A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19029Cu;
        // 0x1902a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19029Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1902A4u;
    // 0x1902a4: 0x0  nop
    ctx->pc = 0x1902a4u;
    // NOP
    // 0x1902a8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1902a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1902ac: 0x0  nop
    ctx->pc = 0x1902acu;
    // NOP
    // 0x1902b0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1902b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1902b4: 0x0  nop
    ctx->pc = 0x1902b4u;
    // NOP
    ctx->pc = 0x1902b8u;
}
