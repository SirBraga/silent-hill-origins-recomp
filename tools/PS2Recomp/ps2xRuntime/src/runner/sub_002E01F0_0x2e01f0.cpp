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

// Function: sub_002E01F0
// Address: 0x2e01f0 - 0x2e0330
void sub_002E01F0_0x2e01f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E01F0_0x2e01f0");
#endif

    switch (ctx->pc) {
        case 0x2e0268u: goto label_2e0268;
        case 0x2e0280u: goto label_2e0280;
        case 0x2e0294u: goto label_2e0294;
        case 0x2e0300u: goto label_2e0300;
        case 0x2e031cu: goto label_2e031c;
        default: break;
    }

    ctx->pc = 0x2e01f0u;

    // 0x2e01f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e01f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e01f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e01f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e01f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e01fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e01fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0204: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0204u;
    {
        const bool branch_taken_0x2e0204 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0204u;
        // 0x2e0208: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0204) {
            ctx->pc = 0x2E0224u;
            goto label_2e0224;
        }
    }
    ctx->pc = 0x2E020Cu;
    // 0x2e020c: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2E020Cu;
    {
        const bool branch_taken_0x2e020c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E020Cu;
        // 0x2e0210: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e020c) {
            ctx->pc = 0x2E02F8u;
            goto label_2e02f8;
        }
    }
    ctx->pc = 0x2E0214u;
    // 0x2e0214: 0x50a2003c  beql        $a1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2E0214u;
    {
        const bool branch_taken_0x2e0214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0214) {
            ctx->pc = 0x2E0218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0214u;
            // 0x2e0218: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0308u;
            goto label_2e0308;
        }
    }
    ctx->pc = 0x2E021Cu;
    // 0x2e021c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2E021Cu;
    {
        const bool branch_taken_0x2e021c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E021Cu;
        // 0x2e0220: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e021c) {
            ctx->pc = 0x2E0320u;
            goto label_2e0320;
        }
    }
    ctx->pc = 0x2E0224u;
label_2e0224:
    // 0x2e0224: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e0224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e0228: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e0228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e022c: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x2E022Cu;
    {
        const bool branch_taken_0x2e022c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e022c) {
            ctx->pc = 0x2E0230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E022Cu;
            // 0x2e0230: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0320u;
            goto label_2e0320;
        }
    }
    ctx->pc = 0x2E0234u;
    // 0x2e0234: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e0234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0238: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2e0238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e023c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e023cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2e0240: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e0240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0244: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e0244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0248: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2e0248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2e024c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x2e024cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e0250: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E0250u;
    {
        const bool branch_taken_0x2e0250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0250u;
        // 0x2e0254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0250) {
            ctx->pc = 0x2E0298u;
            goto label_2e0298;
        }
    }
    ctx->pc = 0x2E0258u;
    // 0x2e0258: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e0258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e025c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e025cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0260: 0xc0b6770  jal         func_2D9DC0
    ctx->pc = 0x2E0260u;
    SET_GPR_U32(ctx, 31, 0x2E0268u);
    ctx->pc = 0x2E0264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0260u;
    // 0x2e0264: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9DC0u, 0x2E0260u, 0x2E0268u)) {
        return;
    }
    ctx->pc = 0x2E0268u;
label_2e0268:
    // 0x2e0268: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0268u;
    {
        const bool branch_taken_0x2e0268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0268u;
        // 0x2e026c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0268) {
            ctx->pc = 0x2E0280u;
            goto label_2e0280;
        }
    }
    ctx->pc = 0x2E0270u;
    // 0x2e0270: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e0270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e0274: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e0274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0278: 0xc0b6710  jal         func_2D9C40
    ctx->pc = 0x2E0278u;
    SET_GPR_U32(ctx, 31, 0x2E0280u);
    ctx->pc = 0x2E027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0278u;
    // 0x2e027c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C40u, 0x2E0278u, 0x2E0280u)) {
        return;
    }
    ctx->pc = 0x2E0280u;
label_2e0280:
    // 0x2e0280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0284: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e0284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e0288: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e0288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e028c: 0xc0b673c  jal         func_2D9CF0
    ctx->pc = 0x2E028Cu;
    SET_GPR_U32(ctx, 31, 0x2E0294u);
    ctx->pc = 0x2E0290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E028Cu;
    // 0x2e0290: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9CF0u, 0x2E028Cu, 0x2E0294u)) {
        return;
    }
    ctx->pc = 0x2E0294u;
label_2e0294:
    // 0x2e0294: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2e0294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2e0298:
    // 0x2e0298: 0x8f839028  lw          $v1, -0x6FD8($gp)
    ctx->pc = 0x2e0298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938664)));
    // 0x2e029c: 0x27829028  addiu       $v0, $gp, -0x6FD8
    ctx->pc = 0x2e029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
    // 0x2e02a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2e02a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2e02a4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2e02a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2e02a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2e02a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2e02ac: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x2e02acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
    // 0x2e02b0: 0x8f828c18  lw          $v0, -0x73E8($gp)
    ctx->pc = 0x2e02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
    // 0x2e02b4: 0x8f839028  lw          $v1, -0x6FD8($gp)
    ctx->pc = 0x2e02b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938664)));
    // 0x2e02b8: 0x8f848c1c  lw          $a0, -0x73E4($gp)
    ctx->pc = 0x2e02b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
    // 0x2e02bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e02bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e02c0: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x2e02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x2e02c4: 0xaf909028  sw          $s0, -0x6FD8($gp)
    ctx->pc = 0x2e02c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938664), GPR_U32(ctx, 16));
    // 0x2e02c8: 0xaf828c18  sw          $v0, -0x73E8($gp)
    ctx->pc = 0x2e02c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 2));
    // 0x2e02cc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e02d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e02d4: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2e02d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e02d8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2e02d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e02dc: 0xaf848c1c  sw          $a0, -0x73E4($gp)
    ctx->pc = 0x2e02dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937628), GPR_U32(ctx, 4));
    // 0x2e02e0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e02e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2e02e4: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x2e02e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x2e02e8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2e02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2e02ec: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e02ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e02f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E02F0u;
    {
        const bool branch_taken_0x2e02f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02F0u;
        // 0x2e02f4: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02f0) {
            ctx->pc = 0x2E031Cu;
            goto label_2e031c;
        }
    }
    ctx->pc = 0x2E02F8u;
label_2e02f8:
    // 0x2e02f8: 0xc0b7f56  jal         func_2DFD58
    ctx->pc = 0x2E02F8u;
    SET_GPR_U32(ctx, 31, 0x2E0300u);
    ctx->pc = 0x2E02FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E02F8u;
    // 0x2e02fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DFD58u, 0x2E02F8u, 0x2E0300u)) {
        return;
    }
    ctx->pc = 0x2E0300u;
label_2e0300:
    // 0x2e0300: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0300u;
    {
        const bool branch_taken_0x2e0300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0300u;
        // 0x2e0304: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0300) {
            ctx->pc = 0x2E0320u;
            goto label_2e0320;
        }
    }
    ctx->pc = 0x2E0308u;
label_2e0308:
    // 0x2e0308: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e0308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e030c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E030Cu;
    {
        const bool branch_taken_0x2e030c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e030c) {
            ctx->pc = 0x2E0310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E030Cu;
            // 0x2e0310: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0320u;
            goto label_2e0320;
        }
    }
    ctx->pc = 0x2E0314u;
    // 0x2e0314: 0xc0b7fbc  jal         func_2DFEF0
    ctx->pc = 0x2E0314u;
    SET_GPR_U32(ctx, 31, 0x2E031Cu);
    ctx->pc = 0x2E0318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0314u;
    // 0x2e0318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DFEF0u, 0x2E0314u, 0x2E031Cu)) {
        return;
    }
    ctx->pc = 0x2E031Cu;
label_2e031c:
    // 0x2e031c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e031cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e0320:
    // 0x2e0320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0328: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0328u;
        // 0x2e032c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0330u;
}
