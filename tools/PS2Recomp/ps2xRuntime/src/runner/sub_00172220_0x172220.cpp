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

// Function: sub_00172220
// Address: 0x172220 - 0x1722d0
void sub_00172220_0x172220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172220_0x172220");
#endif

    switch (ctx->pc) {
        case 0x172220u: goto label_172220;
        case 0x172224u: goto label_172224;
        case 0x172228u: goto label_172228;
        case 0x17222cu: goto label_17222c;
        case 0x172230u: goto label_172230;
        case 0x172234u: goto label_172234;
        case 0x172238u: goto label_172238;
        case 0x17223cu: goto label_17223c;
        case 0x172240u: goto label_172240;
        case 0x172244u: goto label_172244;
        case 0x172248u: goto label_172248;
        case 0x17224cu: goto label_17224c;
        case 0x172250u: goto label_172250;
        case 0x172254u: goto label_172254;
        case 0x172258u: goto label_172258;
        case 0x17225cu: goto label_17225c;
        case 0x172260u: goto label_172260;
        case 0x172264u: goto label_172264;
        case 0x172268u: goto label_172268;
        case 0x17226cu: goto label_17226c;
        case 0x172270u: goto label_172270;
        case 0x172274u: goto label_172274;
        case 0x172278u: goto label_172278;
        case 0x17227cu: goto label_17227c;
        case 0x172280u: goto label_172280;
        case 0x172284u: goto label_172284;
        case 0x172288u: goto label_172288;
        case 0x17228cu: goto label_17228c;
        case 0x172290u: goto label_172290;
        case 0x172294u: goto label_172294;
        case 0x172298u: goto label_172298;
        case 0x17229cu: goto label_17229c;
        case 0x1722a0u: goto label_1722a0;
        case 0x1722a4u: goto label_1722a4;
        case 0x1722a8u: goto label_1722a8;
        case 0x1722acu: goto label_1722ac;
        case 0x1722b0u: goto label_1722b0;
        case 0x1722b4u: goto label_1722b4;
        case 0x1722b8u: goto label_1722b8;
        case 0x1722bcu: goto label_1722bc;
        case 0x1722c0u: goto label_1722c0;
        case 0x1722c4u: goto label_1722c4;
        case 0x1722c8u: goto label_1722c8;
        case 0x1722ccu: goto label_1722cc;
        default: break;
    }

    ctx->pc = 0x172220u;

label_172220:
    // 0x172220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_172224:
    // 0x172224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_172228:
    // 0x172228: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x172228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_17222c:
    // 0x17222c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_172230:
    if (ctx->pc == 0x172230u) {
        ctx->pc = 0x172230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17222Cu;
        // 0x172230: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172234u;
        goto label_172234;
    }
    ctx->pc = 0x17222Cu;
    {
        const bool branch_taken_0x17222c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17222Cu;
        // 0x172230: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17222c) {
            ctx->pc = 0x1722A0u;
            goto label_1722a0;
        }
    }
    ctx->pc = 0x172234u;
label_172234:
    // 0x172234: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_172238:
    if (ctx->pc == 0x172238u) {
        ctx->pc = 0x172238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172234u;
        // 0x172238: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17223Cu;
        goto label_17223c;
    }
    ctx->pc = 0x172234u;
    {
        const bool branch_taken_0x172234 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x172238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172234u;
        // 0x172238: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172234) {
            ctx->pc = 0x1722A0u;
            goto label_1722a0;
        }
    }
    ctx->pc = 0x17223Cu;
label_17223c:
    // 0x17223c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x17223cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_172240:
    // 0x172240: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x172240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_172244:
    // 0x172244: 0x0  nop
    ctx->pc = 0x172244u;
    // NOP
label_172248:
    // 0x172248: 0x5445000f  bnel        $v0, $a1, . + 4 + (0xF << 2)
label_17224c:
    if (ctx->pc == 0x17224Cu) {
        ctx->pc = 0x17224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172248u;
        // 0x17224c: 0x8c830028  lw          $v1, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172250u;
        goto label_172250;
    }
    ctx->pc = 0x172248u;
    {
        const bool branch_taken_0x172248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x172248) {
            ctx->pc = 0x17224Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172248u;
            // 0x17224c: 0x8c830028  lw          $v1, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172288u;
            goto label_172288;
        }
    }
    ctx->pc = 0x172250u;
label_172250:
    // 0x172250: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x172250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_172254:
    // 0x172254: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x172254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_172258:
    // 0x172258: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x172258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_17225c:
    // 0x17225c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17225cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_172260:
    // 0x172260: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x172260u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_172264:
    // 0x172264: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x172264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_172268:
    // 0x172268: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17226c:
    // 0x17226c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17226cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_172270:
    // 0x172270: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x172270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_172274:
    // 0x172274: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x172274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_172278:
    // 0x172278: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x172278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_17227c:
    // 0x17227c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17227cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_172280:
    // 0x172280: 0x10000007  b           . + 4 + (0x7 << 2)
label_172284:
    if (ctx->pc == 0x172284u) {
        ctx->pc = 0x172284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172280u;
        // 0x172284: 0xac830028  sw          $v1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172288u;
        goto label_172288;
    }
    ctx->pc = 0x172280u;
    {
        const bool branch_taken_0x172280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172280u;
        // 0x172284: 0xac830028  sw          $v1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172280) {
            ctx->pc = 0x1722A0u;
            goto label_1722a0;
        }
    }
    ctx->pc = 0x172288u;
label_172288:
    // 0x172288: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x172288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_17228c:
    // 0x17228c: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x17228cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_172290:
    // 0x172290: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_172294:
    if (ctx->pc == 0x172294u) {
        ctx->pc = 0x172294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172290u;
        // 0x172294: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172298u;
        goto label_172298;
    }
    ctx->pc = 0x172290u;
    {
        const bool branch_taken_0x172290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172290u;
        // 0x172294: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172290) {
            ctx->pc = 0x1722A0u;
            goto label_1722a0;
        }
    }
    ctx->pc = 0x172298u;
label_172298:
    // 0x172298: 0x54a0ffeb  bnel        $a1, $zero, . + 4 + (-0x15 << 2)
label_17229c:
    if (ctx->pc == 0x17229Cu) {
        ctx->pc = 0x17229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172298u;
        // 0x17229c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1722A0u;
        goto label_1722a0;
    }
    ctx->pc = 0x172298u;
    {
        const bool branch_taken_0x172298 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x172298) {
            ctx->pc = 0x17229Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172298u;
            // 0x17229c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172248;
        }
    }
    ctx->pc = 0x1722A0u;
label_1722a0:
    // 0x1722a0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1722a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1722a4:
    // 0x1722a4: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x1722a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_1722a8:
    // 0x1722a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1722ac:
    if (ctx->pc == 0x1722ACu) {
        ctx->pc = 0x1722ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722A8u;
        // 0x1722ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1722B0u;
        goto label_1722b0;
    }
    ctx->pc = 0x1722A8u;
    {
        const bool branch_taken_0x1722a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722A8u;
        // 0x1722ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722a8) {
            ctx->pc = 0x1722C8u;
            goto label_1722c8;
        }
    }
    ctx->pc = 0x1722B0u;
label_1722b0:
    // 0x1722b0: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1722b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1722b4:
    // 0x1722b4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1722b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1722b8:
    // 0x1722b8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1722b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1722bc:
    // 0x1722bc: 0x60f809  jalr        $v1
label_1722c0:
    if (ctx->pc == 0x1722C0u) {
        ctx->pc = 0x1722C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722BCu;
        // 0x1722c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1722C4u;
        goto label_1722c4;
    }
    ctx->pc = 0x1722BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1722C4u);
        ctx->pc = 0x1722C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722BCu;
        // 0x1722c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1722BCu, 0x1722C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1722C4u;
label_1722c4:
    // 0x1722c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1722c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1722c8:
    // 0x1722c8: 0x3e00008  jr          $ra
label_1722cc:
    if (ctx->pc == 0x1722CCu) {
        ctx->pc = 0x1722CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722C8u;
        // 0x1722cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1722D0u;
        goto label_fallthrough_0x1722c8;
    }
    ctx->pc = 0x1722C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1722CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722C8u;
        // 0x1722cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1722C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1722c8:
    ctx->pc = 0x1722D0u;
}
