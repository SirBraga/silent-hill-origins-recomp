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

// Function: sub_0011F220
// Address: 0x11f220 - 0x11f298
void sub_0011F220_0x11f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F220_0x11f220");
#endif

    switch (ctx->pc) {
        case 0x11f248u: goto label_11f248;
        case 0x11f26cu: goto label_11f26c;
        case 0x11f284u: goto label_11f284;
        default: break;
    }

    ctx->pc = 0x11f220u;

    // 0x11f220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11f224: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11f224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11f228: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11f228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11f22c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11F22Cu;
    {
        const bool branch_taken_0x11f22c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F22Cu;
        // 0x11f230: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f22c) {
            ctx->pc = 0x11F284u;
            goto label_11f284;
        }
    }
    ctx->pc = 0x11F234u;
    // 0x11f234: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x11F234u;
    {
        const bool branch_taken_0x11f234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F234u;
        // 0x11f238: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f234) {
            ctx->pc = 0x11F274u;
            goto label_11f274;
        }
    }
    ctx->pc = 0x11F23Cu;
    // 0x11f23c: 0x2610bb40  addiu       $s0, $s0, -0x44C0
    ctx->pc = 0x11f23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949696));
    // 0x11f240: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x11F240u;
    SET_GPR_U32(ctx, 31, 0x11F248u);
    ctx->pc = 0x11F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F240u;
    // 0x11f244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x11F240u, 0x11F248u)) {
        return;
    }
    ctx->pc = 0x11F248u;
label_11f248:
    // 0x11f248: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x11f248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x11f24c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11f250: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11f250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11f254: 0xac6245d0  sw          $v0, 0x45D0($v1)
    ctx->pc = 0x11f254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B45D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B45D0u, _value); } while (0);
    // 0x11f258: 0x248445d8  addiu       $a0, $a0, 0x45D8
    ctx->pc = 0x11f258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17880));
    // 0x11f25c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f260: 0x24c6f298  addiu       $a2, $a2, -0xD68
    ctx->pc = 0x11f260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963864));
    // 0x11f264: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x11F264u;
    SET_GPR_U32(ctx, 31, 0x11F26Cu);
    ctx->pc = 0x11F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F264u;
    // 0x11f268: 0x24072dc0  addiu       $a3, $zero, 0x2DC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x11F264u, 0x11F26Cu)) {
        return;
    }
    ctx->pc = 0x11F26Cu;
label_11f26c:
    // 0x11f26c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11F26Cu;
    {
        const bool branch_taken_0x11f26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F26Cu;
        // 0x11f270: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f26c) {
            ctx->pc = 0x11F288u;
            goto label_11f288;
        }
    }
    ctx->pc = 0x11F274u;
label_11f274:
    // 0x11f274: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11f274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11f278: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11f278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11f27c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x11F27Cu;
    SET_GPR_U32(ctx, 31, 0x11F284u);
    ctx->pc = 0x11F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F27Cu;
    // 0x11f280: 0x248445d8  addiu       $a0, $a0, 0x45D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x11F27Cu, 0x11F284u)) {
        return;
    }
    ctx->pc = 0x11F284u;
label_11f284:
    // 0x11f284: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11f284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11f288:
    // 0x11f288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f28c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F28Cu;
        // 0x11f290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F294u;
    // 0x11f294: 0x0  nop
    ctx->pc = 0x11f294u;
    // NOP
    ctx->pc = 0x11f298u;
}
