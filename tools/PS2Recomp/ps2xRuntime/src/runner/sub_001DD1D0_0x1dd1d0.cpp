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

// Function: sub_001DD1D0
// Address: 0x1dd1d0 - 0x1dd268
void sub_001DD1D0_0x1dd1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD1D0_0x1dd1d0");
#endif

    switch (ctx->pc) {
        case 0x1dd1d0u: goto label_1dd1d0;
        case 0x1dd1d4u: goto label_1dd1d4;
        case 0x1dd1d8u: goto label_1dd1d8;
        case 0x1dd1dcu: goto label_1dd1dc;
        case 0x1dd1e0u: goto label_1dd1e0;
        case 0x1dd1e4u: goto label_1dd1e4;
        case 0x1dd1e8u: goto label_1dd1e8;
        case 0x1dd1ecu: goto label_1dd1ec;
        case 0x1dd1f0u: goto label_1dd1f0;
        case 0x1dd1f4u: goto label_1dd1f4;
        case 0x1dd1f8u: goto label_1dd1f8;
        case 0x1dd1fcu: goto label_1dd1fc;
        case 0x1dd200u: goto label_1dd200;
        case 0x1dd204u: goto label_1dd204;
        case 0x1dd208u: goto label_1dd208;
        case 0x1dd20cu: goto label_1dd20c;
        case 0x1dd210u: goto label_1dd210;
        case 0x1dd214u: goto label_1dd214;
        case 0x1dd218u: goto label_1dd218;
        case 0x1dd21cu: goto label_1dd21c;
        case 0x1dd220u: goto label_1dd220;
        case 0x1dd224u: goto label_1dd224;
        case 0x1dd228u: goto label_1dd228;
        case 0x1dd22cu: goto label_1dd22c;
        case 0x1dd230u: goto label_1dd230;
        case 0x1dd234u: goto label_1dd234;
        case 0x1dd238u: goto label_1dd238;
        case 0x1dd23cu: goto label_1dd23c;
        case 0x1dd240u: goto label_1dd240;
        case 0x1dd244u: goto label_1dd244;
        case 0x1dd248u: goto label_1dd248;
        case 0x1dd24cu: goto label_1dd24c;
        case 0x1dd250u: goto label_1dd250;
        case 0x1dd254u: goto label_1dd254;
        case 0x1dd258u: goto label_1dd258;
        case 0x1dd25cu: goto label_1dd25c;
        case 0x1dd260u: goto label_1dd260;
        case 0x1dd264u: goto label_1dd264;
        default: break;
    }

    ctx->pc = 0x1dd1d0u;

label_1dd1d0:
    // 0x1dd1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dd1d4:
    // 0x1dd1d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1dd1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1dd1d8:
    // 0x1dd1d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dd1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1dd1dc:
    // 0x1dd1dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dd1e0:
    // 0x1dd1e0: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1dd1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1dd1e4:
    // 0x1dd1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dd1e8:
    // 0x1dd1e8: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1dd1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1dd1ec:
    // 0x1dd1ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd1f0:
    // 0x1dd1f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dd1f4:
    // 0x1dd1f4: 0x40f809  jalr        $v0
label_1dd1f8:
    if (ctx->pc == 0x1DD1F8u) {
        ctx->pc = 0x1DD1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1F4u;
        // 0x1dd1f8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD1FCu;
        goto label_1dd1fc;
    }
    ctx->pc = 0x1DD1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD1FCu);
        ctx->pc = 0x1DD1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1F4u;
        // 0x1dd1f8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD1F4u, 0x1DD1FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD1FCu;
label_1dd1fc:
    // 0x1dd1fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dd200:
    // 0x1dd200: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1dd200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dd204:
    // 0x1dd204: 0x40f809  jalr        $v0
label_1dd208:
    if (ctx->pc == 0x1DD208u) {
        ctx->pc = 0x1DD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD204u;
        // 0x1dd208: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD20Cu;
        goto label_1dd20c;
    }
    ctx->pc = 0x1DD204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD20Cu);
        ctx->pc = 0x1DD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD204u;
        // 0x1dd208: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD204u, 0x1DD20Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD20Cu;
label_1dd20c:
    // 0x1dd20c: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_1dd210:
    if (ctx->pc == 0x1DD210u) {
        ctx->pc = 0x1DD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD20Cu;
        // 0x1dd210: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD214u;
        goto label_1dd214;
    }
    ctx->pc = 0x1DD20Cu;
    {
        const bool branch_taken_0x1dd20c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD20Cu;
        // 0x1dd210: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd20c) {
            ctx->pc = 0x1DD250u;
            goto label_1dd250;
        }
    }
    ctx->pc = 0x1DD214u;
label_1dd214:
    // 0x1dd214: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dd214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960740)));
label_1dd218:
    // 0x1dd218: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x1dd218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1dd21c:
    // 0x1dd21c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1dd21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1dd220:
    // 0x1dd220: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1dd224:
    if (ctx->pc == 0x1DD224u) {
        ctx->pc = 0x1DD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD220u;
        // 0x1dd224: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD228u;
        goto label_1dd228;
    }
    ctx->pc = 0x1DD220u;
    {
        const bool branch_taken_0x1dd220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD220u;
        // 0x1dd224: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd220) {
            ctx->pc = 0x1DD23Cu;
            goto label_1dd23c;
        }
    }
    ctx->pc = 0x1DD228u;
label_1dd228:
    // 0x1dd228: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dd22c:
    // 0x1dd22c: 0x40f809  jalr        $v0
label_1dd230:
    if (ctx->pc == 0x1DD230u) {
        ctx->pc = 0x1DD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD22Cu;
        // 0x1dd230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD234u;
        goto label_1dd234;
    }
    ctx->pc = 0x1DD22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD234u);
        ctx->pc = 0x1DD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD22Cu;
        // 0x1dd230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD22Cu, 0x1DD234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD234u;
label_1dd234:
    // 0x1dd234: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dd238:
    if (ctx->pc == 0x1DD238u) {
        ctx->pc = 0x1DD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD234u;
        // 0x1dd238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD23Cu;
        goto label_1dd23c;
    }
    ctx->pc = 0x1DD234u;
    {
        const bool branch_taken_0x1dd234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD234u;
        // 0x1dd238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd234) {
            ctx->pc = 0x1DD24Cu;
            goto label_1dd24c;
        }
    }
    ctx->pc = 0x1DD23Cu;
label_1dd23c:
    // 0x1dd23c: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dd240:
    // 0x1dd240: 0x40f809  jalr        $v0
label_1dd244:
    if (ctx->pc == 0x1DD244u) {
        ctx->pc = 0x1DD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD240u;
        // 0x1dd244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD248u;
        goto label_1dd248;
    }
    ctx->pc = 0x1DD240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD248u);
        ctx->pc = 0x1DD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD240u;
        // 0x1dd244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD240u, 0x1DD248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD248u;
label_1dd248:
    // 0x1dd248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd24c:
    // 0x1dd24c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1dd24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1dd250:
    // 0x1dd250: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dd250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd254:
    // 0x1dd254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd258:
    // 0x1dd258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd25c:
    // 0x1dd25c: 0x3e00008  jr          $ra
label_1dd260:
    if (ctx->pc == 0x1DD260u) {
        ctx->pc = 0x1DD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD25Cu;
        // 0x1dd260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD264u;
        goto label_1dd264;
    }
    ctx->pc = 0x1DD25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD25Cu;
        // 0x1dd260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD264u;
label_1dd264:
    // 0x1dd264: 0x0  nop
    ctx->pc = 0x1dd264u;
    // NOP
    ctx->pc = 0x1dd268u;
}
