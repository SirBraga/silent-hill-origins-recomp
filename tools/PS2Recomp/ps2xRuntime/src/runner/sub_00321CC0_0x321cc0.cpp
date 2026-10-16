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

// Function: sub_00321CC0
// Address: 0x321cc0 - 0x321d48
void sub_00321CC0_0x321cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321CC0_0x321cc0");
#endif

    switch (ctx->pc) {
        case 0x321cf8u: goto label_321cf8;
        case 0x321d0cu: goto label_321d0c;
        default: break;
    }

    ctx->pc = 0x321cc0u;

    // 0x321cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x321cc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x321cc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x321cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x321ccc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x321cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321cd0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x321cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x321cd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x321cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321cdc: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x321cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x321ce0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x321ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x321ce4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x321ce4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x321ce8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x321CE8u;
    {
        const bool branch_taken_0x321ce8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x321ce8) {
            ctx->pc = 0x321CF8u;
            goto label_321cf8;
        }
    }
    ctx->pc = 0x321CF0u;
    // 0x321cf0: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x321CF0u;
    SET_GPR_U32(ctx, 31, 0x321CF8u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x321CF0u, 0x321CF8u)) {
        return;
    }
    ctx->pc = 0x321CF8u;
label_321cf8:
    // 0x321cf8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x321cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x321cfc: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x321cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x321d00: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x321d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x321d04: 0xc0c8706  jal         func_321C18
    ctx->pc = 0x321D04u;
    SET_GPR_U32(ctx, 31, 0x321D0Cu);
    ctx->pc = 0x321D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D04u;
    // 0x321d08: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321C18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321C18u, 0x321D04u, 0x321D0Cu)) {
        return;
    }
    ctx->pc = 0x321D0Cu;
label_321d0c:
    // 0x321d0c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x321D0Cu;
    {
        const bool branch_taken_0x321d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D0Cu;
        // 0x321d10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d0c) {
            ctx->pc = 0x321D28u;
            goto label_321d28;
        }
    }
    ctx->pc = 0x321D14u;
    // 0x321d14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321d14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321d18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x321d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321d20: 0x80c9bb8  j           func_326EE0
    ctx->pc = 0x321D20u;
    ctx->pc = 0x321D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D20u;
    // 0x321d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326EE0u;
    sub_00326EE0_0x326ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x321D28u;
label_321d28:
    // 0x321d28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321d2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x321d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321d34: 0x3e00008  jr          $ra
    ctx->pc = 0x321D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D34u;
        // 0x321d38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321D3Cu;
    // 0x321d3c: 0x0  nop
    ctx->pc = 0x321d3cu;
    // NOP
    // 0x321d40: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x321d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x321d44: 0x0  nop
    ctx->pc = 0x321d44u;
    // NOP
    ctx->pc = 0x321d48u;
}
