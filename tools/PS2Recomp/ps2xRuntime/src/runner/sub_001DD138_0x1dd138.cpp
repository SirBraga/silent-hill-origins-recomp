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

// Function: sub_001DD138
// Address: 0x1dd138 - 0x1dd1d0
void sub_001DD138_0x1dd138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD138_0x1dd138");
#endif

    switch (ctx->pc) {
        case 0x1dd138u: goto label_1dd138;
        case 0x1dd13cu: goto label_1dd13c;
        case 0x1dd140u: goto label_1dd140;
        case 0x1dd144u: goto label_1dd144;
        case 0x1dd148u: goto label_1dd148;
        case 0x1dd14cu: goto label_1dd14c;
        case 0x1dd150u: goto label_1dd150;
        case 0x1dd154u: goto label_1dd154;
        case 0x1dd158u: goto label_1dd158;
        case 0x1dd15cu: goto label_1dd15c;
        case 0x1dd160u: goto label_1dd160;
        case 0x1dd164u: goto label_1dd164;
        case 0x1dd168u: goto label_1dd168;
        case 0x1dd16cu: goto label_1dd16c;
        case 0x1dd170u: goto label_1dd170;
        case 0x1dd174u: goto label_1dd174;
        case 0x1dd178u: goto label_1dd178;
        case 0x1dd17cu: goto label_1dd17c;
        case 0x1dd180u: goto label_1dd180;
        case 0x1dd184u: goto label_1dd184;
        case 0x1dd188u: goto label_1dd188;
        case 0x1dd18cu: goto label_1dd18c;
        case 0x1dd190u: goto label_1dd190;
        case 0x1dd194u: goto label_1dd194;
        case 0x1dd198u: goto label_1dd198;
        case 0x1dd19cu: goto label_1dd19c;
        case 0x1dd1a0u: goto label_1dd1a0;
        case 0x1dd1a4u: goto label_1dd1a4;
        case 0x1dd1a8u: goto label_1dd1a8;
        case 0x1dd1acu: goto label_1dd1ac;
        case 0x1dd1b0u: goto label_1dd1b0;
        case 0x1dd1b4u: goto label_1dd1b4;
        case 0x1dd1b8u: goto label_1dd1b8;
        case 0x1dd1bcu: goto label_1dd1bc;
        case 0x1dd1c0u: goto label_1dd1c0;
        case 0x1dd1c4u: goto label_1dd1c4;
        case 0x1dd1c8u: goto label_1dd1c8;
        case 0x1dd1ccu: goto label_1dd1cc;
        default: break;
    }

    ctx->pc = 0x1dd138u;

label_1dd138:
    // 0x1dd138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dd13c:
    // 0x1dd13c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1dd13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1dd140:
    // 0x1dd140: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dd140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1dd144:
    // 0x1dd144: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dd148:
    // 0x1dd148: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1dd148u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1dd14c:
    // 0x1dd14c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dd150:
    // 0x1dd150: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1dd150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1dd154:
    // 0x1dd154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd158:
    // 0x1dd158: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dd15c:
    // 0x1dd15c: 0x40f809  jalr        $v0
label_1dd160:
    if (ctx->pc == 0x1DD160u) {
        ctx->pc = 0x1DD160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD15Cu;
        // 0x1dd160: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD164u;
        goto label_1dd164;
    }
    ctx->pc = 0x1DD15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD164u);
        ctx->pc = 0x1DD160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD15Cu;
        // 0x1dd160: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD15Cu, 0x1DD164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD164u;
label_1dd164:
    // 0x1dd164: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dd168:
    // 0x1dd168: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1dd168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dd16c:
    // 0x1dd16c: 0x40f809  jalr        $v0
label_1dd170:
    if (ctx->pc == 0x1DD170u) {
        ctx->pc = 0x1DD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD16Cu;
        // 0x1dd170: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD174u;
        goto label_1dd174;
    }
    ctx->pc = 0x1DD16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD174u);
        ctx->pc = 0x1DD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD16Cu;
        // 0x1dd170: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD16Cu, 0x1DD174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD174u;
label_1dd174:
    // 0x1dd174: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_1dd178:
    if (ctx->pc == 0x1DD178u) {
        ctx->pc = 0x1DD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD174u;
        // 0x1dd178: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD17Cu;
        goto label_1dd17c;
    }
    ctx->pc = 0x1DD174u;
    {
        const bool branch_taken_0x1dd174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD174u;
        // 0x1dd178: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd174) {
            ctx->pc = 0x1DD1B8u;
            goto label_1dd1b8;
        }
    }
    ctx->pc = 0x1DD17Cu;
label_1dd17c:
    // 0x1dd17c: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dd17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960740)));
label_1dd180:
    // 0x1dd180: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x1dd180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1dd184:
    // 0x1dd184: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1dd184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1dd188:
    // 0x1dd188: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1dd18c:
    if (ctx->pc == 0x1DD18Cu) {
        ctx->pc = 0x1DD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD188u;
        // 0x1dd18c: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD190u;
        goto label_1dd190;
    }
    ctx->pc = 0x1DD188u;
    {
        const bool branch_taken_0x1dd188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD188u;
        // 0x1dd18c: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd188) {
            ctx->pc = 0x1DD1A4u;
            goto label_1dd1a4;
        }
    }
    ctx->pc = 0x1DD190u;
label_1dd190:
    // 0x1dd190: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dd194:
    // 0x1dd194: 0x40f809  jalr        $v0
label_1dd198:
    if (ctx->pc == 0x1DD198u) {
        ctx->pc = 0x1DD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD194u;
        // 0x1dd198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD19Cu;
        goto label_1dd19c;
    }
    ctx->pc = 0x1DD194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD19Cu);
        ctx->pc = 0x1DD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD194u;
        // 0x1dd198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD194u, 0x1DD19Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD19Cu;
label_1dd19c:
    // 0x1dd19c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dd1a0:
    if (ctx->pc == 0x1DD1A0u) {
        ctx->pc = 0x1DD1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD19Cu;
        // 0x1dd1a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD1A4u;
        goto label_1dd1a4;
    }
    ctx->pc = 0x1DD19Cu;
    {
        const bool branch_taken_0x1dd19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD19Cu;
        // 0x1dd1a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd19c) {
            ctx->pc = 0x1DD1B4u;
            goto label_1dd1b4;
        }
    }
    ctx->pc = 0x1DD1A4u;
label_1dd1a4:
    // 0x1dd1a4: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dd1a8:
    // 0x1dd1a8: 0x40f809  jalr        $v0
label_1dd1ac:
    if (ctx->pc == 0x1DD1ACu) {
        ctx->pc = 0x1DD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1A8u;
        // 0x1dd1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD1B0u;
        goto label_1dd1b0;
    }
    ctx->pc = 0x1DD1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD1B0u);
        ctx->pc = 0x1DD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1A8u;
        // 0x1dd1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD1A8u, 0x1DD1B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD1B0u;
label_1dd1b0:
    // 0x1dd1b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd1b4:
    // 0x1dd1b4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1dd1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1dd1b8:
    // 0x1dd1b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dd1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd1bc:
    // 0x1dd1bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd1c0:
    // 0x1dd1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd1c4:
    // 0x1dd1c4: 0x3e00008  jr          $ra
label_1dd1c8:
    if (ctx->pc == 0x1DD1C8u) {
        ctx->pc = 0x1DD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1C4u;
        // 0x1dd1c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD1CCu;
        goto label_1dd1cc;
    }
    ctx->pc = 0x1DD1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1C4u;
        // 0x1dd1c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD1CCu;
label_1dd1cc:
    // 0x1dd1cc: 0x0  nop
    ctx->pc = 0x1dd1ccu;
    // NOP
    ctx->pc = 0x1dd1d0u;
}
