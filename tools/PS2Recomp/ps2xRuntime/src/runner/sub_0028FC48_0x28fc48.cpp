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

// Function: sub_0028FC48
// Address: 0x28fc48 - 0x28fdb8
void sub_0028FC48_0x28fc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FC48_0x28fc48");
#endif

    switch (ctx->pc) {
        case 0x28fc48u: goto label_28fc48;
        case 0x28fc4cu: goto label_28fc4c;
        case 0x28fc50u: goto label_28fc50;
        case 0x28fc54u: goto label_28fc54;
        case 0x28fc58u: goto label_28fc58;
        case 0x28fc5cu: goto label_28fc5c;
        case 0x28fc60u: goto label_28fc60;
        case 0x28fc64u: goto label_28fc64;
        case 0x28fc68u: goto label_28fc68;
        case 0x28fc6cu: goto label_28fc6c;
        case 0x28fc70u: goto label_28fc70;
        case 0x28fc74u: goto label_28fc74;
        case 0x28fc78u: goto label_28fc78;
        case 0x28fc7cu: goto label_28fc7c;
        case 0x28fc80u: goto label_28fc80;
        case 0x28fc84u: goto label_28fc84;
        case 0x28fc88u: goto label_28fc88;
        case 0x28fc8cu: goto label_28fc8c;
        case 0x28fc90u: goto label_28fc90;
        case 0x28fc94u: goto label_28fc94;
        case 0x28fc98u: goto label_28fc98;
        case 0x28fc9cu: goto label_28fc9c;
        case 0x28fca0u: goto label_28fca0;
        case 0x28fca4u: goto label_28fca4;
        case 0x28fca8u: goto label_28fca8;
        case 0x28fcacu: goto label_28fcac;
        case 0x28fcb0u: goto label_28fcb0;
        case 0x28fcb4u: goto label_28fcb4;
        case 0x28fcb8u: goto label_28fcb8;
        case 0x28fcbcu: goto label_28fcbc;
        case 0x28fcc0u: goto label_28fcc0;
        case 0x28fcc4u: goto label_28fcc4;
        case 0x28fcc8u: goto label_28fcc8;
        case 0x28fcccu: goto label_28fccc;
        case 0x28fcd0u: goto label_28fcd0;
        case 0x28fcd4u: goto label_28fcd4;
        case 0x28fcd8u: goto label_28fcd8;
        case 0x28fcdcu: goto label_28fcdc;
        case 0x28fce0u: goto label_28fce0;
        case 0x28fce4u: goto label_28fce4;
        case 0x28fce8u: goto label_28fce8;
        case 0x28fcecu: goto label_28fcec;
        case 0x28fcf0u: goto label_28fcf0;
        case 0x28fcf4u: goto label_28fcf4;
        case 0x28fcf8u: goto label_28fcf8;
        case 0x28fcfcu: goto label_28fcfc;
        case 0x28fd00u: goto label_28fd00;
        case 0x28fd04u: goto label_28fd04;
        case 0x28fd08u: goto label_28fd08;
        case 0x28fd0cu: goto label_28fd0c;
        case 0x28fd10u: goto label_28fd10;
        case 0x28fd14u: goto label_28fd14;
        case 0x28fd18u: goto label_28fd18;
        case 0x28fd1cu: goto label_28fd1c;
        case 0x28fd20u: goto label_28fd20;
        case 0x28fd24u: goto label_28fd24;
        case 0x28fd28u: goto label_28fd28;
        case 0x28fd2cu: goto label_28fd2c;
        case 0x28fd30u: goto label_28fd30;
        case 0x28fd34u: goto label_28fd34;
        case 0x28fd38u: goto label_28fd38;
        case 0x28fd3cu: goto label_28fd3c;
        case 0x28fd40u: goto label_28fd40;
        case 0x28fd44u: goto label_28fd44;
        case 0x28fd48u: goto label_28fd48;
        case 0x28fd4cu: goto label_28fd4c;
        case 0x28fd50u: goto label_28fd50;
        case 0x28fd54u: goto label_28fd54;
        case 0x28fd58u: goto label_28fd58;
        case 0x28fd5cu: goto label_28fd5c;
        case 0x28fd60u: goto label_28fd60;
        case 0x28fd64u: goto label_28fd64;
        case 0x28fd68u: goto label_28fd68;
        case 0x28fd6cu: goto label_28fd6c;
        case 0x28fd70u: goto label_28fd70;
        case 0x28fd74u: goto label_28fd74;
        case 0x28fd78u: goto label_28fd78;
        case 0x28fd7cu: goto label_28fd7c;
        case 0x28fd80u: goto label_28fd80;
        case 0x28fd84u: goto label_28fd84;
        case 0x28fd88u: goto label_28fd88;
        case 0x28fd8cu: goto label_28fd8c;
        case 0x28fd90u: goto label_28fd90;
        case 0x28fd94u: goto label_28fd94;
        case 0x28fd98u: goto label_28fd98;
        case 0x28fd9cu: goto label_28fd9c;
        case 0x28fda0u: goto label_28fda0;
        case 0x28fda4u: goto label_28fda4;
        case 0x28fda8u: goto label_28fda8;
        case 0x28fdacu: goto label_28fdac;
        case 0x28fdb0u: goto label_28fdb0;
        case 0x28fdb4u: goto label_28fdb4;
        default: break;
    }

    ctx->pc = 0x28fc48u;

label_28fc48:
    // 0x28fc48: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x28fc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_28fc4c:
    // 0x28fc4c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x28fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_28fc50:
    // 0x28fc50: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x28fc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_28fc54:
    // 0x28fc54: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x28fc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_28fc58:
    // 0x28fc58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28fc58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28fc5c:
    // 0x28fc5c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x28fc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_28fc60:
    // 0x28fc60: 0x244263b0  addiu       $v0, $v0, 0x63B0
    ctx->pc = 0x28fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25520));
label_28fc64:
    // 0x28fc64: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x28fc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_28fc68:
    // 0x28fc68: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x28fc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_28fc6c:
    // 0x28fc6c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28fc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_28fc70:
    // 0x28fc70: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x28fc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_28fc74:
    // 0x28fc74: 0x8c500518  lw          $s0, 0x518($v0)
    ctx->pc = 0x28fc74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1304)));
label_28fc78:
    // 0x28fc78: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_28fc7c:
    if (ctx->pc == 0x28FC7Cu) {
        ctx->pc = 0x28FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC78u;
        // 0x28fc7c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FC80u;
        goto label_28fc80;
    }
    ctx->pc = 0x28FC78u;
    {
        const bool branch_taken_0x28fc78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC78u;
        // 0x28fc7c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc78) {
            ctx->pc = 0x28FCB0u;
            goto label_28fcb0;
        }
    }
    ctx->pc = 0x28FC80u;
label_28fc80:
    // 0x28fc80: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_28fc84:
    // 0x28fc84: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x28fc84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_28fc88:
    // 0x28fc88: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x28fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_28fc8c:
    // 0x28fc8c: 0x0  nop
    ctx->pc = 0x28fc8cu;
    // NOP
label_28fc90:
    // 0x28fc90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28fc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28fc94:
    // 0x28fc94: 0x40f809  jalr        $v0
label_28fc98:
    if (ctx->pc == 0x28FC98u) {
        ctx->pc = 0x28FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC94u;
        // 0x28fc98: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FC9Cu;
        goto label_28fc9c;
    }
    ctx->pc = 0x28FC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28FC9Cu);
        ctx->pc = 0x28FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC94u;
        // 0x28fc98: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FC94u, 0x28FC9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28FC9Cu;
label_28fc9c:
    // 0x28fc9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_28fca0:
    if (ctx->pc == 0x28FCA0u) {
        ctx->pc = 0x28FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC9Cu;
        // 0x28fca0: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FCA4u;
        goto label_28fca4;
    }
    ctx->pc = 0x28FC9Cu;
    {
        const bool branch_taken_0x28fc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC9Cu;
        // 0x28fca0: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc9c) {
            ctx->pc = 0x28FCB4u;
            goto label_28fcb4;
        }
    }
    ctx->pc = 0x28FCA4u;
label_28fca4:
    // 0x28fca4: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x28fca4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28fca8:
    // 0x28fca8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_28fcac:
    if (ctx->pc == 0x28FCACu) {
        ctx->pc = 0x28FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCA8u;
        // 0x28fcac: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FCB0u;
        goto label_28fcb0;
    }
    ctx->pc = 0x28FCA8u;
    {
        const bool branch_taken_0x28fca8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fca8) {
            ctx->pc = 0x28FCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FCA8u;
            // 0x28fcac: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28fc90;
        }
    }
    ctx->pc = 0x28FCB0u;
label_28fcb0:
    // 0x28fcb0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x28fcb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fcb4:
    // 0x28fcb4: 0x16a00029  bnez        $s5, . + 4 + (0x29 << 2)
label_28fcb8:
    if (ctx->pc == 0x28FCB8u) {
        ctx->pc = 0x28FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCB4u;
        // 0x28fcb8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FCBCu;
        goto label_28fcbc;
    }
    ctx->pc = 0x28FCB4u;
    {
        const bool branch_taken_0x28fcb4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCB4u;
        // 0x28fcb8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcb4) {
            ctx->pc = 0x28FD5Cu;
            goto label_28fd5c;
        }
    }
    ctx->pc = 0x28FCBCu;
label_28fcbc:
    // 0x28fcbc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_28fcc0:
    // 0x28fcc0: 0x267463b0  addiu       $s4, $s3, 0x63B0
    ctx->pc = 0x28fcc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 25520));
label_28fcc4:
    // 0x28fcc4: 0xc089d24  jal         func_227490
label_28fcc8:
    if (ctx->pc == 0x28FCC8u) {
        ctx->pc = 0x28FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCC4u;
        // 0x28fcc8: 0x24530fc8  addiu       $s3, $v0, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FCCCu;
        goto label_28fccc;
    }
    ctx->pc = 0x28FCC4u;
    SET_GPR_U32(ctx, 31, 0x28FCCCu);
    ctx->pc = 0x28FCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCC4u;
    // 0x28fcc8: 0x24530fc8  addiu       $s3, $v0, 0xFC8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227490u, 0x28FCC4u, 0x28FCCCu)) {
        return;
    }
    ctx->pc = 0x28FCCCu;
label_28fccc:
    // 0x28fccc: 0x8e6300cc  lw          $v1, 0xCC($s3)
    ctx->pc = 0x28fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_28fcd0:
    // 0x28fcd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28fcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28fcd4:
    // 0x28fcd4: 0x60f809  jalr        $v1
label_28fcd8:
    if (ctx->pc == 0x28FCD8u) {
        ctx->pc = 0x28FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCD4u;
        // 0x28fcd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FCDCu;
        goto label_28fcdc;
    }
    ctx->pc = 0x28FCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28FCDCu);
        ctx->pc = 0x28FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCD4u;
        // 0x28fcd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FCD4u, 0x28FCDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28FCDCu;
label_28fcdc:
    // 0x28fcdc: 0x8e820c18  lw          $v0, 0xC18($s4)
    ctx->pc = 0x28fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3096)));
label_28fce0:
    // 0x28fce0: 0x40f809  jalr        $v0
label_28fce4:
    if (ctx->pc == 0x28FCE4u) {
        ctx->pc = 0x28FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCE0u;
        // 0x28fce4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FCE8u;
        goto label_28fce8;
    }
    ctx->pc = 0x28FCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28FCE8u);
        ctx->pc = 0x28FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCE0u;
        // 0x28fce4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FCE0u, 0x28FCE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28FCE8u;
label_28fce8:
    // 0x28fce8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28fce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28fcec:
    // 0x28fcec: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_28fcf0:
    if (ctx->pc == 0x28FCF0u) {
        ctx->pc = 0x28FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCECu;
        // 0x28fcf0: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FCF4u;
        goto label_28fcf4;
    }
    ctx->pc = 0x28FCECu;
    {
        const bool branch_taken_0x28fcec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCECu;
        // 0x28fcf0: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcec) {
            ctx->pc = 0x28FD50u;
            goto label_28fd50;
        }
    }
    ctx->pc = 0x28FCF4u;
label_28fcf4:
    // 0x28fcf4: 0x8e840514  lw          $a0, 0x514($s4)
    ctx->pc = 0x28fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1300)));
label_28fcf8:
    // 0x28fcf8: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x28fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_28fcfc:
    // 0x28fcfc: 0x40f809  jalr        $v0
label_28fd00:
    if (ctx->pc == 0x28FD00u) {
        ctx->pc = 0x28FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCFCu;
        // 0x28fd00: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FD04u;
        goto label_28fd04;
    }
    ctx->pc = 0x28FCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28FD04u);
        ctx->pc = 0x28FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCFCu;
        // 0x28fd00: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FCFCu, 0x28FD04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28FD04u;
label_28fd04:
    // 0x28fd04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28fd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28fd08:
    // 0x28fd08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28fd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28fd0c:
    // 0x28fd0c: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x28fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_28fd10:
    // 0x28fd10: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x28fd10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28fd14:
    // 0x28fd14: 0x40f809  jalr        $v0
label_28fd18:
    if (ctx->pc == 0x28FD18u) {
        ctx->pc = 0x28FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD14u;
        // 0x28fd18: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FD1Cu;
        goto label_28fd1c;
    }
    ctx->pc = 0x28FD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28FD1Cu);
        ctx->pc = 0x28FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD14u;
        // 0x28fd18: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FD14u, 0x28FD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28FD1Cu;
label_28fd1c:
    // 0x28fd1c: 0x8e630108  lw          $v1, 0x108($s3)
    ctx->pc = 0x28fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_28fd20:
    // 0x28fd20: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28fd20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28fd24:
    // 0x28fd24: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x28fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28fd28:
    // 0x28fd28: 0x60f809  jalr        $v1
label_28fd2c:
    if (ctx->pc == 0x28FD2Cu) {
        ctx->pc = 0x28FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD28u;
        // 0x28fd2c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FD30u;
        goto label_28fd30;
    }
    ctx->pc = 0x28FD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28FD30u);
        ctx->pc = 0x28FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD28u;
        // 0x28fd2c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FD28u, 0x28FD30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28FD30u;
label_28fd30:
    // 0x28fd30: 0x8e6600cc  lw          $a2, 0xCC($s3)
    ctx->pc = 0x28fd30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_28fd34:
    // 0x28fd34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28fd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28fd38:
    // 0x28fd38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28fd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28fd3c:
    // 0x28fd3c: 0xc0f809  jalr        $a2
label_28fd40:
    if (ctx->pc == 0x28FD40u) {
        ctx->pc = 0x28FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD3Cu;
        // 0x28fd40: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FD44u;
        goto label_28fd44;
    }
    ctx->pc = 0x28FD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x28FD44u);
        ctx->pc = 0x28FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD3Cu;
        // 0x28fd40: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FD3Cu, 0x28FD44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28FD44u;
label_28fd44:
    // 0x28fd44: 0x8e830518  lw          $v1, 0x518($s4)
    ctx->pc = 0x28fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1304)));
label_28fd48:
    // 0x28fd48: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x28fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_28fd4c:
    // 0x28fd4c: 0xae900518  sw          $s0, 0x518($s4)
    ctx->pc = 0x28fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1304), GPR_U32(ctx, 16));
label_28fd50:
    // 0x28fd50: 0xc089ce8  jal         func_2273A0
label_28fd54:
    if (ctx->pc == 0x28FD54u) {
        ctx->pc = 0x28FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD50u;
        // 0x28fd54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FD58u;
        goto label_28fd58;
    }
    ctx->pc = 0x28FD50u;
    SET_GPR_U32(ctx, 31, 0x28FD58u);
    ctx->pc = 0x28FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD50u;
    // 0x28fd54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2273A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2273A0u, 0x28FD50u, 0x28FD58u)) {
        return;
    }
    ctx->pc = 0x28FD58u;
label_28fd58:
    // 0x28fd58: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x28fd58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28fd5c:
    // 0x28fd5c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x28fd5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_28fd60:
    // 0x28fd60: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x28fd60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_28fd64:
    // 0x28fd64: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x28fd64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_28fd68:
    // 0x28fd68: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x28fd68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_28fd6c:
    // 0x28fd6c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x28fd6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28fd70:
    // 0x28fd70: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x28fd70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28fd74:
    // 0x28fd74: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28fd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28fd78:
    // 0x28fd78: 0x3e00008  jr          $ra
label_28fd7c:
    if (ctx->pc == 0x28FD7Cu) {
        ctx->pc = 0x28FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD78u;
        // 0x28fd7c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FD80u;
        goto label_28fd80;
    }
    ctx->pc = 0x28FD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD78u;
        // 0x28fd7c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FD80u;
label_28fd80:
    // 0x28fd80: 0xaf85c04c  sw          $a1, -0x3FB4($gp)
    ctx->pc = 0x28fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950988), GPR_U32(ctx, 5));
label_28fd84:
    // 0x28fd84: 0x0  nop
    ctx->pc = 0x28fd84u;
    // NOP
label_28fd88:
    // 0x28fd88: 0xaf85c054  sw          $a1, -0x3FAC($gp)
    ctx->pc = 0x28fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950996), GPR_U32(ctx, 5));
label_28fd8c:
    // 0x28fd8c: 0x0  nop
    ctx->pc = 0x28fd8cu;
    // NOP
label_28fd90:
    // 0x28fd90: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x28fd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28fd94:
    // 0x28fd94: 0x0  nop
    ctx->pc = 0x28fd94u;
    // NOP
label_28fd98:
    // 0x28fd98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28fd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28fd9c:
    // 0x28fd9c: 0x0  nop
    ctx->pc = 0x28fd9cu;
    // NOP
label_28fda0:
    // 0x28fda0: 0x8c620c18  lw          $v0, 0xC18($v1)
    ctx->pc = 0x28fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3096)));
label_28fda4:
    // 0x28fda4: 0x0  nop
    ctx->pc = 0x28fda4u;
    // NOP
label_28fda8:
    // 0x28fda8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x28fda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_28fdac:
    // 0x28fdac: 0x0  nop
    ctx->pc = 0x28fdacu;
    // NOP
label_28fdb0:
    // 0x28fdb0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28fdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_28fdb4:
    // 0x28fdb4: 0x0  nop
    ctx->pc = 0x28fdb4u;
    // NOP
    ctx->pc = 0x28fdb8u;
}
