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

// Function: sub_0021FCA8
// Address: 0x21fca8 - 0x21ff50
void sub_0021FCA8_0x21fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FCA8_0x21fca8");
#endif

    switch (ctx->pc) {
        case 0x21fca8u: goto label_21fca8;
        case 0x21fcacu: goto label_21fcac;
        case 0x21fcb0u: goto label_21fcb0;
        case 0x21fcb4u: goto label_21fcb4;
        case 0x21fcb8u: goto label_21fcb8;
        case 0x21fcbcu: goto label_21fcbc;
        case 0x21fcc0u: goto label_21fcc0;
        case 0x21fcc4u: goto label_21fcc4;
        case 0x21fcc8u: goto label_21fcc8;
        case 0x21fcccu: goto label_21fccc;
        case 0x21fcd0u: goto label_21fcd0;
        case 0x21fcd4u: goto label_21fcd4;
        case 0x21fcd8u: goto label_21fcd8;
        case 0x21fcdcu: goto label_21fcdc;
        case 0x21fce0u: goto label_21fce0;
        case 0x21fce4u: goto label_21fce4;
        case 0x21fce8u: goto label_21fce8;
        case 0x21fcecu: goto label_21fcec;
        case 0x21fcf0u: goto label_21fcf0;
        case 0x21fcf4u: goto label_21fcf4;
        case 0x21fcf8u: goto label_21fcf8;
        case 0x21fcfcu: goto label_21fcfc;
        case 0x21fd00u: goto label_21fd00;
        case 0x21fd04u: goto label_21fd04;
        case 0x21fd08u: goto label_21fd08;
        case 0x21fd0cu: goto label_21fd0c;
        case 0x21fd10u: goto label_21fd10;
        case 0x21fd14u: goto label_21fd14;
        case 0x21fd18u: goto label_21fd18;
        case 0x21fd1cu: goto label_21fd1c;
        case 0x21fd20u: goto label_21fd20;
        case 0x21fd24u: goto label_21fd24;
        case 0x21fd28u: goto label_21fd28;
        case 0x21fd2cu: goto label_21fd2c;
        case 0x21fd30u: goto label_21fd30;
        case 0x21fd34u: goto label_21fd34;
        case 0x21fd38u: goto label_21fd38;
        case 0x21fd3cu: goto label_21fd3c;
        case 0x21fd40u: goto label_21fd40;
        case 0x21fd44u: goto label_21fd44;
        case 0x21fd48u: goto label_21fd48;
        case 0x21fd4cu: goto label_21fd4c;
        case 0x21fd50u: goto label_21fd50;
        case 0x21fd54u: goto label_21fd54;
        case 0x21fd58u: goto label_21fd58;
        case 0x21fd5cu: goto label_21fd5c;
        case 0x21fd60u: goto label_21fd60;
        case 0x21fd64u: goto label_21fd64;
        case 0x21fd68u: goto label_21fd68;
        case 0x21fd6cu: goto label_21fd6c;
        case 0x21fd70u: goto label_21fd70;
        case 0x21fd74u: goto label_21fd74;
        case 0x21fd78u: goto label_21fd78;
        case 0x21fd7cu: goto label_21fd7c;
        case 0x21fd80u: goto label_21fd80;
        case 0x21fd84u: goto label_21fd84;
        case 0x21fd88u: goto label_21fd88;
        case 0x21fd8cu: goto label_21fd8c;
        case 0x21fd90u: goto label_21fd90;
        case 0x21fd94u: goto label_21fd94;
        case 0x21fd98u: goto label_21fd98;
        case 0x21fd9cu: goto label_21fd9c;
        case 0x21fda0u: goto label_21fda0;
        case 0x21fda4u: goto label_21fda4;
        case 0x21fda8u: goto label_21fda8;
        case 0x21fdacu: goto label_21fdac;
        case 0x21fdb0u: goto label_21fdb0;
        case 0x21fdb4u: goto label_21fdb4;
        case 0x21fdb8u: goto label_21fdb8;
        case 0x21fdbcu: goto label_21fdbc;
        case 0x21fdc0u: goto label_21fdc0;
        case 0x21fdc4u: goto label_21fdc4;
        case 0x21fdc8u: goto label_21fdc8;
        case 0x21fdccu: goto label_21fdcc;
        case 0x21fdd0u: goto label_21fdd0;
        case 0x21fdd4u: goto label_21fdd4;
        case 0x21fdd8u: goto label_21fdd8;
        case 0x21fddcu: goto label_21fddc;
        case 0x21fde0u: goto label_21fde0;
        case 0x21fde4u: goto label_21fde4;
        case 0x21fde8u: goto label_21fde8;
        case 0x21fdecu: goto label_21fdec;
        case 0x21fdf0u: goto label_21fdf0;
        case 0x21fdf4u: goto label_21fdf4;
        case 0x21fdf8u: goto label_21fdf8;
        case 0x21fdfcu: goto label_21fdfc;
        case 0x21fe00u: goto label_21fe00;
        case 0x21fe04u: goto label_21fe04;
        case 0x21fe08u: goto label_21fe08;
        case 0x21fe0cu: goto label_21fe0c;
        case 0x21fe10u: goto label_21fe10;
        case 0x21fe14u: goto label_21fe14;
        case 0x21fe18u: goto label_21fe18;
        case 0x21fe1cu: goto label_21fe1c;
        case 0x21fe20u: goto label_21fe20;
        case 0x21fe24u: goto label_21fe24;
        case 0x21fe28u: goto label_21fe28;
        case 0x21fe2cu: goto label_21fe2c;
        case 0x21fe30u: goto label_21fe30;
        case 0x21fe34u: goto label_21fe34;
        case 0x21fe38u: goto label_21fe38;
        case 0x21fe3cu: goto label_21fe3c;
        case 0x21fe40u: goto label_21fe40;
        case 0x21fe44u: goto label_21fe44;
        case 0x21fe48u: goto label_21fe48;
        case 0x21fe4cu: goto label_21fe4c;
        case 0x21fe50u: goto label_21fe50;
        case 0x21fe54u: goto label_21fe54;
        case 0x21fe58u: goto label_21fe58;
        case 0x21fe5cu: goto label_21fe5c;
        case 0x21fe60u: goto label_21fe60;
        case 0x21fe64u: goto label_21fe64;
        case 0x21fe68u: goto label_21fe68;
        case 0x21fe6cu: goto label_21fe6c;
        case 0x21fe70u: goto label_21fe70;
        case 0x21fe74u: goto label_21fe74;
        case 0x21fe78u: goto label_21fe78;
        case 0x21fe7cu: goto label_21fe7c;
        case 0x21fe80u: goto label_21fe80;
        case 0x21fe84u: goto label_21fe84;
        case 0x21fe88u: goto label_21fe88;
        case 0x21fe8cu: goto label_21fe8c;
        case 0x21fe90u: goto label_21fe90;
        case 0x21fe94u: goto label_21fe94;
        case 0x21fe98u: goto label_21fe98;
        case 0x21fe9cu: goto label_21fe9c;
        case 0x21fea0u: goto label_21fea0;
        case 0x21fea4u: goto label_21fea4;
        case 0x21fea8u: goto label_21fea8;
        case 0x21feacu: goto label_21feac;
        case 0x21feb0u: goto label_21feb0;
        case 0x21feb4u: goto label_21feb4;
        case 0x21feb8u: goto label_21feb8;
        case 0x21febcu: goto label_21febc;
        case 0x21fec0u: goto label_21fec0;
        case 0x21fec4u: goto label_21fec4;
        case 0x21fec8u: goto label_21fec8;
        case 0x21feccu: goto label_21fecc;
        case 0x21fed0u: goto label_21fed0;
        case 0x21fed4u: goto label_21fed4;
        case 0x21fed8u: goto label_21fed8;
        case 0x21fedcu: goto label_21fedc;
        case 0x21fee0u: goto label_21fee0;
        case 0x21fee4u: goto label_21fee4;
        case 0x21fee8u: goto label_21fee8;
        case 0x21feecu: goto label_21feec;
        case 0x21fef0u: goto label_21fef0;
        case 0x21fef4u: goto label_21fef4;
        case 0x21fef8u: goto label_21fef8;
        case 0x21fefcu: goto label_21fefc;
        case 0x21ff00u: goto label_21ff00;
        case 0x21ff04u: goto label_21ff04;
        case 0x21ff08u: goto label_21ff08;
        case 0x21ff0cu: goto label_21ff0c;
        case 0x21ff10u: goto label_21ff10;
        case 0x21ff14u: goto label_21ff14;
        case 0x21ff18u: goto label_21ff18;
        case 0x21ff1cu: goto label_21ff1c;
        case 0x21ff20u: goto label_21ff20;
        case 0x21ff24u: goto label_21ff24;
        case 0x21ff28u: goto label_21ff28;
        case 0x21ff2cu: goto label_21ff2c;
        case 0x21ff30u: goto label_21ff30;
        case 0x21ff34u: goto label_21ff34;
        case 0x21ff38u: goto label_21ff38;
        case 0x21ff3cu: goto label_21ff3c;
        case 0x21ff40u: goto label_21ff40;
        case 0x21ff44u: goto label_21ff44;
        case 0x21ff48u: goto label_21ff48;
        case 0x21ff4cu: goto label_21ff4c;
        default: break;
    }

    ctx->pc = 0x21fca8u;

label_21fca8:
    // 0x21fca8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21fca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_21fcac:
    // 0x21fcac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x21fcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_21fcb0:
    // 0x21fcb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21fcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_21fcb4:
    // 0x21fcb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21fcb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21fcb8:
    // 0x21fcb8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x21fcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_21fcbc:
    // 0x21fcbc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21fcbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21fcc0:
    // 0x21fcc0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x21fcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_21fcc4:
    // 0x21fcc4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x21fcc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21fcc8:
    // 0x21fcc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21fcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21fccc:
    // 0x21fccc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x21fcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_21fcd0:
    // 0x21fcd0: 0x8e3001a8  lw          $s0, 0x1A8($s1)
    ctx->pc = 0x21fcd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_21fcd4:
    // 0x21fcd4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x21fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_21fcd8:
    // 0x21fcd8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_21fcdc:
    if (ctx->pc == 0x21FCDCu) {
        ctx->pc = 0x21FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCD8u;
        // 0x21fcdc: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FCE0u;
        goto label_21fce0;
    }
    ctx->pc = 0x21FCD8u;
    {
        const bool branch_taken_0x21fcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCD8u;
        // 0x21fcdc: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcd8) {
            ctx->pc = 0x21FD14u;
            goto label_21fd14;
        }
    }
    ctx->pc = 0x21FCE0u;
label_21fce0:
    // 0x21fce0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x21fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_21fce4:
    // 0x21fce4: 0x8e2501ac  lw          $a1, 0x1AC($s1)
    ctx->pc = 0x21fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_21fce8:
    // 0x21fce8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21fcec:
    // 0x21fcec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x21fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_21fcf0:
    // 0x21fcf0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x21fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_21fcf4:
    // 0x21fcf4: 0x40f809  jalr        $v0
label_21fcf8:
    if (ctx->pc == 0x21FCF8u) {
        ctx->pc = 0x21FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCF4u;
        // 0x21fcf8: 0x8c650038  lw          $a1, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FCFCu;
        goto label_21fcfc;
    }
    ctx->pc = 0x21FCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21FCFCu);
        ctx->pc = 0x21FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCF4u;
        // 0x21fcf8: 0x8c650038  lw          $a1, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FCF4u, 0x21FCFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21FCFCu;
label_21fcfc:
    // 0x21fcfc: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_21fd00:
    if (ctx->pc == 0x21FD00u) {
        ctx->pc = 0x21FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCFCu;
        // 0x21fd00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD04u;
        goto label_21fd04;
    }
    ctx->pc = 0x21FCFCu;
    {
        const bool branch_taken_0x21fcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCFCu;
        // 0x21fd00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcfc) {
            ctx->pc = 0x21FF30u;
            goto label_21ff30;
        }
    }
    ctx->pc = 0x21FD04u;
label_21fd04:
    // 0x21fd04: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x21fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_21fd08:
    // 0x21fd08: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x21fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_21fd0c:
    // 0x21fd0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21fd10:
    // 0x21fd10: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x21fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_21fd14:
    // 0x21fd14: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x21fd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_21fd18:
    // 0x21fd18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fd1c:
    // 0x21fd1c: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
label_21fd20:
    if (ctx->pc == 0x21FD20u) {
        ctx->pc = 0x21FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD1Cu;
        // 0x21fd20: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD24u;
        goto label_21fd24;
    }
    ctx->pc = 0x21FD1Cu;
    {
        const bool branch_taken_0x21fd1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD1Cu;
        // 0x21fd20: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd1c) {
            ctx->pc = 0x21FEA0u;
            goto label_21fea0;
        }
    }
    ctx->pc = 0x21FD24u;
label_21fd24:
    // 0x21fd24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_21fd28:
    if (ctx->pc == 0x21FD28u) {
        ctx->pc = 0x21FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD24u;
        // 0x21fd28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD2Cu;
        goto label_21fd2c;
    }
    ctx->pc = 0x21FD24u;
    {
        const bool branch_taken_0x21fd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd24) {
            ctx->pc = 0x21FD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FD24u;
            // 0x21fd28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FD3Cu;
            goto label_21fd3c;
        }
    }
    ctx->pc = 0x21FD2Cu;
label_21fd2c:
    // 0x21fd2c: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
label_21fd30:
    if (ctx->pc == 0x21FD30u) {
        ctx->pc = 0x21FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD2Cu;
        // 0x21fd30: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD34u;
        goto label_21fd34;
    }
    ctx->pc = 0x21FD2Cu;
    {
        const bool branch_taken_0x21fd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd2c) {
            ctx->pc = 0x21FD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FD2Cu;
            // 0x21fd30: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FDA4u;
            goto label_21fda4;
        }
    }
    ctx->pc = 0x21FD34u;
label_21fd34:
    // 0x21fd34: 0x1000007f  b           . + 4 + (0x7F << 2)
label_21fd38:
    if (ctx->pc == 0x21FD38u) {
        ctx->pc = 0x21FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD34u;
        // 0x21fd38: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD3Cu;
        goto label_21fd3c;
    }
    ctx->pc = 0x21FD34u;
    {
        const bool branch_taken_0x21fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD34u;
        // 0x21fd38: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd34) {
            ctx->pc = 0x21FF34u;
            goto label_21ff34;
        }
    }
    ctx->pc = 0x21FD3Cu;
label_21fd3c:
    // 0x21fd3c: 0x5462007d  bnel        $v1, $v0, . + 4 + (0x7D << 2)
label_21fd40:
    if (ctx->pc == 0x21FD40u) {
        ctx->pc = 0x21FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD3Cu;
        // 0x21fd40: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD44u;
        goto label_21fd44;
    }
    ctx->pc = 0x21FD3Cu;
    {
        const bool branch_taken_0x21fd3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21fd3c) {
            ctx->pc = 0x21FD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FD3Cu;
            // 0x21fd40: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FF34u;
            goto label_21ff34;
        }
    }
    ctx->pc = 0x21FD44u;
label_21fd44:
    // 0x21fd44: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x21fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_21fd48:
    // 0x21fd48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21fd4c:
    // 0x21fd4c: 0x8e2301b0  lw          $v1, 0x1B0($s1)
    ctx->pc = 0x21fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_21fd50:
    // 0x21fd50: 0x26060034  addiu       $a2, $s0, 0x34
    ctx->pc = 0x21fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_21fd54:
    // 0x21fd54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21fd58:
    // 0x21fd58: 0x8e070048  lw          $a3, 0x48($s0)
    ctx->pc = 0x21fd58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_21fd5c:
    // 0x21fd5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x21fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_21fd60:
    // 0x21fd60: 0x8c6b0004  lw          $t3, 0x4($v1)
    ctx->pc = 0x21fd60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_21fd64:
    // 0x21fd64: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x21fd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_21fd68:
    // 0x21fd68: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x21fd68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21fd6c:
    // 0x21fd6c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x21fd6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21fd70:
    // 0x21fd70: 0x160f809  jalr        $t3
label_21fd74:
    if (ctx->pc == 0x21FD74u) {
        ctx->pc = 0x21FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD70u;
        // 0x21fd74: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD78u;
        goto label_21fd78;
    }
    ctx->pc = 0x21FD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 11);
        SET_GPR_U32(ctx, 31, 0x21FD78u);
        ctx->pc = 0x21FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD70u;
        // 0x21fd74: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FD70u, 0x21FD78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21FD78u;
label_21fd78:
    // 0x21fd78: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x21fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_21fd7c:
    // 0x21fd7c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x21fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_21fd80:
    // 0x21fd80: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x21fd80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_21fd84:
    // 0x21fd84: 0x5440006b  bnel        $v0, $zero, . + 4 + (0x6B << 2)
label_21fd88:
    if (ctx->pc == 0x21FD88u) {
        ctx->pc = 0x21FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD84u;
        // 0x21fd88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FD8Cu;
        goto label_21fd8c;
    }
    ctx->pc = 0x21FD84u;
    {
        const bool branch_taken_0x21fd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fd84) {
            ctx->pc = 0x21FD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FD84u;
            // 0x21fd88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FF34u;
            goto label_21ff34;
        }
    }
    ctx->pc = 0x21FD8Cu;
label_21fd8c:
    // 0x21fd8c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x21fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_21fd90:
    // 0x21fd90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21fd94:
    // 0x21fd94: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x21fd94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_21fd98:
    // 0x21fd98: 0x50400066  beql        $v0, $zero, . + 4 + (0x66 << 2)
label_21fd9c:
    if (ctx->pc == 0x21FD9Cu) {
        ctx->pc = 0x21FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD98u;
        // 0x21fd9c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDA0u;
        goto label_21fda0;
    }
    ctx->pc = 0x21FD98u;
    {
        const bool branch_taken_0x21fd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fd98) {
            ctx->pc = 0x21FD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FD98u;
            // 0x21fd9c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FF34u;
            goto label_21ff34;
        }
    }
    ctx->pc = 0x21FDA0u;
label_21fda0:
    // 0x21fda0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x21fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_21fda4:
    // 0x21fda4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x21fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_21fda8:
    // 0x21fda8: 0x8e23013c  lw          $v1, 0x13C($s1)
    ctx->pc = 0x21fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_21fdac:
    // 0x21fdac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21fdb0:
    // 0x21fdb0: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x21fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_21fdb4:
    // 0x21fdb4: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x21fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_21fdb8:
    // 0x21fdb8: 0x14440038  bne         $v0, $a0, . + 4 + (0x38 << 2)
label_21fdbc:
    if (ctx->pc == 0x21FDBCu) {
        ctx->pc = 0x21FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDB8u;
        // 0x21fdbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDC0u;
        goto label_21fdc0;
    }
    ctx->pc = 0x21FDB8u;
    {
        const bool branch_taken_0x21fdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x21FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDB8u;
        // 0x21fdbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdb8) {
            ctx->pc = 0x21FE9Cu;
            goto label_21fe9c;
        }
    }
    ctx->pc = 0x21FDC0u;
label_21fdc0:
    // 0x21fdc0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x21fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_21fdc4:
    // 0x21fdc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21fdc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fdc8:
    // 0x21fdc8: 0x8e2901a8  lw          $t1, 0x1A8($s1)
    ctx->pc = 0x21fdc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_21fdcc:
    // 0x21fdcc: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
label_21fdd0:
    if (ctx->pc == 0x21FDD0u) {
        ctx->pc = 0x21FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDCCu;
        // 0x21fdd0: 0x8e2600d8  lw          $a2, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDD4u;
        goto label_21fdd4;
    }
    ctx->pc = 0x21FDCCu;
    {
        const bool branch_taken_0x21fdcc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDCCu;
        // 0x21fdd0: 0x8e2600d8  lw          $a2, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdcc) {
            ctx->pc = 0x21FE98u;
            goto label_21fe98;
        }
    }
    ctx->pc = 0x21FDD4u;
label_21fdd4:
    // 0x21fdd4: 0x252a0038  addiu       $t2, $t1, 0x38
    ctx->pc = 0x21fdd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 56));
label_21fdd8:
    // 0x21fdd8: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x21fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_21fddc:
    // 0x21fddc: 0x0  nop
    ctx->pc = 0x21fddcu;
    // NOP
label_21fde0:
    // 0x21fde0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x21fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_21fde4:
    // 0x21fde4: 0x8e23013c  lw          $v1, 0x13C($s1)
    ctx->pc = 0x21fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_21fde8:
    // 0x21fde8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x21fde8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_21fdec:
    // 0x21fdec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_21fdf0:
    if (ctx->pc == 0x21FDF0u) {
        ctx->pc = 0x21FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDECu;
        // 0x21fdf0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FDF4u;
        goto label_21fdf4;
    }
    ctx->pc = 0x21FDECu;
    {
        const bool branch_taken_0x21fdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fdec) {
            ctx->pc = 0x21FDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FDECu;
            // 0x21fdf0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FDF4u;
            goto label_21fdf4;
        }
    }
    ctx->pc = 0x21FDF4u;
label_21fdf4:
    // 0x21fdf4: 0x8cc4002c  lw          $a0, 0x2C($a2)
    ctx->pc = 0x21fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_21fdf8:
    // 0x21fdf8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x21fdf8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21fdfc:
    // 0x21fdfc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x21fdfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21fe00:
    // 0x21fe00: 0x1812  mflo        $v1
    ctx->pc = 0x21fe00u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_21fe04:
    // 0x21fe04: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x21fe04u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_21fe08:
    // 0x21fe08: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x21fe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21fe0c:
    // 0x21fe0c: 0x2810  mfhi        $a1
    ctx->pc = 0x21fe0cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21fe10:
    // 0x21fe10: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
label_21fe14:
    if (ctx->pc == 0x21FE14u) {
        ctx->pc = 0x21FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE10u;
        // 0x21fe14: 0xa5400b  movn        $t0, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE18u;
        goto label_21fe18;
    }
    ctx->pc = 0x21FE10u;
    {
        const bool branch_taken_0x21fe10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE10u;
        // 0x21fe14: 0xa5400b  movn        $t0, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe10) {
            ctx->pc = 0x21FE34u;
            goto label_21fe34;
        }
    }
    ctx->pc = 0x21FE18u;
label_21fe18:
    // 0x21fe18: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x21fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_21fe1c:
    // 0x21fe1c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_21fe20:
    if (ctx->pc == 0x21FE20u) {
        ctx->pc = 0x21FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE1Cu;
        // 0x21fe20: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE24u;
        goto label_21fe24;
    }
    ctx->pc = 0x21FE1Cu;
    {
        const bool branch_taken_0x21fe1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fe1c) {
            ctx->pc = 0x21FE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE1Cu;
            // 0x21fe20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FE24u;
            goto label_21fe24;
        }
    }
    ctx->pc = 0x21FE24u;
label_21fe24:
    // 0x21fe24: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x21fe24u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21fe28:
    // 0x21fe28: 0x1012  mflo        $v0
    ctx->pc = 0x21fe28u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_21fe2c:
    // 0x21fe2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21fe30:
    // 0x21fe30: 0xad220048  sw          $v0, 0x48($t1)
    ctx->pc = 0x21fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 72), GPR_U32(ctx, 2));
label_21fe34:
    // 0x21fe34: 0x8d220040  lw          $v0, 0x40($t1)
    ctx->pc = 0x21fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
label_21fe38:
    // 0x21fe38: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x21fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_21fe3c:
    // 0x21fe3c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x21fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_21fe40:
    // 0x21fe40: 0x24c60054  addiu       $a2, $a2, 0x54
    ctx->pc = 0x21fe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 84));
label_21fe44:
    // 0x21fe44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21fe48:
    // 0x21fe48: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x21fe48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_21fe4c:
    // 0x21fe4c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x21fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_21fe50:
    // 0x21fe50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21fe54:
    // 0x21fe54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21fe58:
    // 0x21fe58: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
label_21fe5c:
    if (ctx->pc == 0x21FE5Cu) {
        ctx->pc = 0x21FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE58u;
        // 0x21fe5c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE60u;
        goto label_21fe60;
    }
    ctx->pc = 0x21FE58u;
    {
        const bool branch_taken_0x21fe58 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x21FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE58u;
        // 0x21fe5c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe58) {
            ctx->pc = 0x21FE88u;
            goto label_21fe88;
        }
    }
    ctx->pc = 0x21FE60u;
label_21fe60:
    // 0x21fe60: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x21fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_21fe64:
    // 0x21fe64: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x21fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21fe68:
    // 0x21fe68: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x21fe68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21fe6c:
    // 0x21fe6c: 0x0  nop
    ctx->pc = 0x21fe6cu;
    // NOP
label_21fe70:
    // 0x21fe70: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x21fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_21fe74:
    // 0x21fe74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x21fe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_21fe78:
    // 0x21fe78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_21fe7c:
    // 0x21fe7c: 0x0  nop
    ctx->pc = 0x21fe7cu;
    // NOP
label_21fe80:
    // 0x21fe80: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
label_21fe84:
    if (ctx->pc == 0x21FE84u) {
        ctx->pc = 0x21FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE80u;
        // 0x21fe84: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE88u;
        goto label_21fe88;
    }
    ctx->pc = 0x21FE80u;
    {
        const bool branch_taken_0x21fe80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE80u;
        // 0x21fe84: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe80) {
            ctx->pc = 0x21FE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fe70;
        }
    }
    ctx->pc = 0x21FE88u;
label_21fe88:
    // 0x21fe88: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x21fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_21fe8c:
    // 0x21fe8c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x21fe8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21fe90:
    // 0x21fe90: 0x5440ffd3  bnel        $v0, $zero, . + 4 + (-0x2D << 2)
label_21fe94:
    if (ctx->pc == 0x21FE94u) {
        ctx->pc = 0x21FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE90u;
        // 0x21fe94: 0x8cc40024  lw          $a0, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FE98u;
        goto label_21fe98;
    }
    ctx->pc = 0x21FE90u;
    {
        const bool branch_taken_0x21fe90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fe90) {
            ctx->pc = 0x21FE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FE90u;
            // 0x21fe94: 0x8cc40024  lw          $a0, 0x24($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fde0;
        }
    }
    ctx->pc = 0x21FE98u;
label_21fe98:
    // 0x21fe98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fe9c:
    // 0x21fe9c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x21fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_21fea0:
    // 0x21fea0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x21fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_21fea4:
    // 0x21fea4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x21fea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21fea8:
    // 0x21fea8: 0x8e2301b0  lw          $v1, 0x1B0($s1)
    ctx->pc = 0x21fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_21feac:
    // 0x21feac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x21feacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21feb0:
    // 0x21feb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21feb4:
    // 0x21feb4: 0x8e070048  lw          $a3, 0x48($s0)
    ctx->pc = 0x21feb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_21feb8:
    // 0x21feb8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x21feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_21febc:
    // 0x21febc: 0x8c6b0004  lw          $t3, 0x4($v1)
    ctx->pc = 0x21febcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_21fec0:
    // 0x21fec0: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x21fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_21fec4:
    // 0x21fec4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x21fec4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21fec8:
    // 0x21fec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21fecc:
    // 0x21fecc: 0x160f809  jalr        $t3
label_21fed0:
    if (ctx->pc == 0x21FED0u) {
        ctx->pc = 0x21FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FECCu;
        // 0x21fed0: 0x26060034  addiu       $a2, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FED4u;
        goto label_21fed4;
    }
    ctx->pc = 0x21FECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 11);
        SET_GPR_U32(ctx, 31, 0x21FED4u);
        ctx->pc = 0x21FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FECCu;
        // 0x21fed0: 0x26060034  addiu       $a2, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FECCu, 0x21FED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21FED4u;
label_21fed4:
    // 0x21fed4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x21fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_21fed8:
    // 0x21fed8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x21fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_21fedc:
    // 0x21fedc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x21fedcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_21fee0:
    // 0x21fee0: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_21fee4:
    if (ctx->pc == 0x21FEE4u) {
        ctx->pc = 0x21FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEE0u;
        // 0x21fee4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FEE8u;
        goto label_21fee8;
    }
    ctx->pc = 0x21FEE0u;
    {
        const bool branch_taken_0x21fee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fee0) {
            ctx->pc = 0x21FEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FEE0u;
            // 0x21fee4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FF34u;
            goto label_21ff34;
        }
    }
    ctx->pc = 0x21FEE8u;
label_21fee8:
    // 0x21fee8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x21fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_21feec:
    // 0x21feec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21feecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fef0:
    // 0x21fef0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_21fef4:
    if (ctx->pc == 0x21FEF4u) {
        ctx->pc = 0x21FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEF0u;
        // 0x21fef4: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FEF8u;
        goto label_21fef8;
    }
    ctx->pc = 0x21FEF0u;
    {
        const bool branch_taken_0x21fef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21fef0) {
            ctx->pc = 0x21FEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FEF0u;
            // 0x21fef4: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FF04u;
            goto label_21ff04;
        }
    }
    ctx->pc = 0x21FEF8u;
label_21fef8:
    // 0x21fef8: 0xc087ede  jal         func_21FB78
label_21fefc:
    if (ctx->pc == 0x21FEFCu) {
        ctx->pc = 0x21FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEF8u;
        // 0x21fefc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF00u;
        goto label_21ff00;
    }
    ctx->pc = 0x21FEF8u;
    SET_GPR_U32(ctx, 31, 0x21FF00u);
    ctx->pc = 0x21FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEF8u;
    // 0x21fefc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21FB78u, 0x21FEF8u, 0x21FF00u)) {
        return;
    }
    ctx->pc = 0x21FF00u;
label_21ff00:
    // 0x21ff00: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x21ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_21ff04:
    // 0x21ff04: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21ff08:
    // 0x21ff08: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x21ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_21ff0c:
    // 0x21ff0c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x21ff0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_21ff10:
    // 0x21ff10: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x21ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_21ff14:
    // 0x21ff14: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x21ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_21ff18:
    // 0x21ff18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21ff1c:
    // 0x21ff1c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x21ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_21ff20:
    // 0x21ff20: 0x8e23013c  lw          $v1, 0x13C($s1)
    ctx->pc = 0x21ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_21ff24:
    // 0x21ff24: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x21ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
label_21ff28:
    // 0x21ff28: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x21ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_21ff2c:
    // 0x21ff2c: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x21ff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_21ff30:
    // 0x21ff30: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x21ff30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21ff34:
    // 0x21ff34: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x21ff34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21ff38:
    // 0x21ff38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21ff38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21ff3c:
    // 0x21ff3c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x21ff3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21ff40:
    // 0x21ff40: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x21ff40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21ff44:
    // 0x21ff44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21ff44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21ff48:
    // 0x21ff48: 0x3e00008  jr          $ra
label_21ff4c:
    if (ctx->pc == 0x21FF4Cu) {
        ctx->pc = 0x21FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF48u;
        // 0x21ff4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF50u;
        goto label_fallthrough_0x21ff48;
    }
    ctx->pc = 0x21FF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF48u;
        // 0x21ff4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21ff48:
    ctx->pc = 0x21FF50u;
}
