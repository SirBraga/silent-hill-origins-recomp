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

// Function: sub_0010CBF8
// Address: 0x10cbf8 - 0x10ce40
void sub_0010CBF8_0x10cbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CBF8_0x10cbf8");
#endif

    switch (ctx->pc) {
        case 0x10cc48u: goto label_10cc48;
        case 0x10cc5cu: goto label_10cc5c;
        case 0x10cc7cu: goto label_10cc7c;
        case 0x10cc94u: goto label_10cc94;
        case 0x10ccb8u: goto label_10ccb8;
        case 0x10ccccu: goto label_10cccc;
        case 0x10cce8u: goto label_10cce8;
        case 0x10cd08u: goto label_10cd08;
        case 0x10cd18u: goto label_10cd18;
        case 0x10cd34u: goto label_10cd34;
        case 0x10cd40u: goto label_10cd40;
        case 0x10cd60u: goto label_10cd60;
        case 0x10cd80u: goto label_10cd80;
        case 0x10cda0u: goto label_10cda0;
        case 0x10cdc0u: goto label_10cdc0;
        case 0x10cde0u: goto label_10cde0;
        default: break;
    }

    ctx->pc = 0x10cbf8u;

    // 0x10cbf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10cbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10cbfc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x10cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x10cc00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10cc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10cc04: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10cc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10cc08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10cc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10cc0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10cc0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10cc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10cc14: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x10cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x10cc18: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x10cc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10cc1c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CC1Cu;
    {
        const bool branch_taken_0x10cc1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x10CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC1Cu;
        // 0x10cc20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cc1c) {
            ctx->pc = 0x10CC34u;
            goto label_10cc34;
        }
    }
    ctx->pc = 0x10CC24u;
    // 0x10cc24: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x10cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x10cc28: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x10cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8898u));
    // 0x10cc2c: 0x14a3001c  bne         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x10CC2Cu;
    {
        const bool branch_taken_0x10cc2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC2Cu;
        // 0x10cc30: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cc2c) {
            ctx->pc = 0x10CCA0u;
            goto label_10cca0;
        }
    }
    ctx->pc = 0x10CC34u;
label_10cc34:
    // 0x10cc34: 0x8e0213f4  lw          $v0, 0x13F4($s0)
    ctx->pc = 0x10cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5108)));
    // 0x10cc38: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x10cc38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10cc3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10cc40: 0xc0b7182  jal         func_2DC608
    ctx->pc = 0x10CC40u;
    SET_GPR_U32(ctx, 31, 0x10CC48u);
    ctx->pc = 0x10CC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC40u;
    // 0x10cc44: 0xae0213f4  sw          $v0, 0x13F4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC608u, 0x10CC40u, 0x10CC48u)) {
        return;
    }
    ctx->pc = 0x10CC48u;
label_10cc48:
    // 0x10cc48: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10cc4c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x10CC4Cu;
    {
        const bool branch_taken_0x10cc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cc4c) {
            ctx->pc = 0x10CC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CC4Cu;
            // 0x10cc50: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CC80u;
            goto label_10cc80;
        }
    }
    ctx->pc = 0x10CC54u;
    // 0x10cc54: 0xc09cdae  jal         func_2736B8
    ctx->pc = 0x10CC54u;
    SET_GPR_U32(ctx, 31, 0x10CC5Cu);
    ctx->pc = 0x2736B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2736B8u, 0x10CC54u, 0x10CC5Cu)) {
        return;
    }
    ctx->pc = 0x10CC5Cu;
label_10cc5c:
    // 0x10cc5c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x10cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x10cc60: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x10cc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10cc64: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x10cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8898u));
    // 0x10cc68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc6c: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x10cc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10cc70: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x10cc70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x10cc74: 0xc0436ce  jal         func_10DB38
    ctx->pc = 0x10CC74u;
    SET_GPR_U32(ctx, 31, 0x10CC7Cu);
    ctx->pc = 0x10CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC74u;
    // 0x10cc78: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10DB38u, 0x10CC74u, 0x10CC7Cu)) {
        return;
    }
    ctx->pc = 0x10CC7Cu;
label_10cc7c:
    // 0x10cc7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_10cc80:
    // 0x10cc80: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x10CC80u;
    {
        const bool branch_taken_0x10cc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cc80) {
            ctx->pc = 0x10CC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CC80u;
            // 0x10cc84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CC88u;
    // 0x10cc88: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x10cc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10cc8c: 0xc043476  jal         func_10D1D8
    ctx->pc = 0x10CC8Cu;
    SET_GPR_U32(ctx, 31, 0x10CC94u);
    ctx->pc = 0x10CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC8Cu;
    // 0x10cc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D1D8u, 0x10CC8Cu, 0x10CC94u)) {
        return;
    }
    ctx->pc = 0x10CC94u;
label_10cc94:
    // 0x10cc94: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x10CC94u;
    {
        const bool branch_taken_0x10cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC94u;
        // 0x10cc98: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cc94) {
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CC9Cu;
    // 0x10cc9c: 0x0  nop
    ctx->pc = 0x10cc9cu;
    // NOP
label_10cca0:
    // 0x10cca0: 0x8c434328  lw          $v1, 0x4328($v0)
    ctx->pc = 0x10cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17192)));
    // 0x10cca4: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x10CCA4u;
    {
        const bool branch_taken_0x10cca4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCA4u;
        // 0x10cca8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cca4) {
            ctx->pc = 0x10CCF0u;
            goto label_10ccf0;
        }
    }
    ctx->pc = 0x10CCACu;
    // 0x10ccac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ccacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccb0: 0xc0433e0  jal         func_10CF80
    ctx->pc = 0x10CCB0u;
    SET_GPR_U32(ctx, 31, 0x10CCB8u);
    ctx->pc = 0x10CCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCB0u;
    // 0x10ccb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10CF80u, 0x10CCB0u, 0x10CCB8u)) {
        return;
    }
    ctx->pc = 0x10CCB8u;
label_10ccb8:
    // 0x10ccb8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x10ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x10ccbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ccc0: 0xac6282ec  sw          $v0, -0x7D14($v1)
    ctx->pc = 0x10ccc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3382ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3382ECu, _value); } while (0);
    // 0x10ccc4: 0xc043a38  jal         func_10E8E0
    ctx->pc = 0x10CCC4u;
    SET_GPR_U32(ctx, 31, 0x10CCCCu);
    ctx->pc = 0x10CCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCC4u;
    // 0x10ccc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E8E0u, 0x10CCC4u, 0x10CCCCu)) {
        return;
    }
    ctx->pc = 0x10CCCCu;
label_10cccc:
    // 0x10cccc: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x10CCCCu;
    {
        const bool branch_taken_0x10cccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cccc) {
            ctx->pc = 0x10CCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CCCCu;
            // 0x10ccd0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CCD4u;
    // 0x10ccd4: 0x8e041244  lw          $a0, 0x1244($s0)
    ctx->pc = 0x10ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4676)));
    // 0x10ccd8: 0x10800053  beqz        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x10CCD8u;
    {
        const bool branch_taken_0x10ccd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCD8u;
        // 0x10ccdc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ccd8) {
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CCE0u;
    // 0x10cce0: 0xc0ba760  jal         func_2E9D80
    ctx->pc = 0x10CCE0u;
    SET_GPR_U32(ctx, 31, 0x10CCE8u);
    ctx->pc = 0x10CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCE0u;
    // 0x10cce4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x10CCE0u, 0x10CCE8u)) {
        return;
    }
    ctx->pc = 0x10CCE8u;
label_10cce8:
    // 0x10cce8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x10CCE8u;
    {
        const bool branch_taken_0x10cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCE8u;
        // 0x10ccec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cce8) {
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CCF0u;
label_10ccf0:
    // 0x10ccf0: 0x8c434330  lw          $v1, 0x4330($v0)
    ctx->pc = 0x10ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17200)));
    // 0x10ccf4: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x10CCF4u;
    {
        const bool branch_taken_0x10ccf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CCF4u;
        // 0x10ccf8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ccf4) {
            ctx->pc = 0x10CD48u;
            goto label_10cd48;
        }
    }
    ctx->pc = 0x10CCFCu;
    // 0x10ccfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ccfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd00: 0xc0439b0  jal         func_10E6C0
    ctx->pc = 0x10CD00u;
    SET_GPR_U32(ctx, 31, 0x10CD08u);
    ctx->pc = 0x10CD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD00u;
    // 0x10cd04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E6C0u, 0x10CD00u, 0x10CD08u)) {
        return;
    }
    ctx->pc = 0x10CD08u;
label_10cd08:
    // 0x10cd08: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10cd0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd10: 0xc043a38  jal         func_10E8E0
    ctx->pc = 0x10CD10u;
    SET_GPR_U32(ctx, 31, 0x10CD18u);
    ctx->pc = 0x10CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD10u;
    // 0x10cd14: 0xac4082ec  sw          $zero, -0x7D14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935276), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E8E0u, 0x10CD10u, 0x10CD18u)) {
        return;
    }
    ctx->pc = 0x10CD18u;
label_10cd18:
    // 0x10cd18: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x10CD18u;
    {
        const bool branch_taken_0x10cd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cd18) {
            ctx->pc = 0x10CD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CD18u;
            // 0x10cd1c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CD20u;
    // 0x10cd20: 0x8e101244  lw          $s0, 0x1244($s0)
    ctx->pc = 0x10cd20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4676)));
    // 0x10cd24: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x10CD24u;
    {
        const bool branch_taken_0x10cd24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD24u;
        // 0x10cd28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd24) {
            ctx->pc = 0x10CE24u;
            goto label_10ce24;
        }
    }
    ctx->pc = 0x10CD2Cu;
    // 0x10cd2c: 0xc0ba760  jal         func_2E9D80
    ctx->pc = 0x10CD2Cu;
    SET_GPR_U32(ctx, 31, 0x10CD34u);
    ctx->pc = 0x10CD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD2Cu;
    // 0x10cd30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x10CD2Cu, 0x10CD34u)) {
        return;
    }
    ctx->pc = 0x10CD34u;
label_10cd34:
    // 0x10cd34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd38: 0xc0ba718  jal         func_2E9C60
    ctx->pc = 0x10CD38u;
    SET_GPR_U32(ctx, 31, 0x10CD40u);
    ctx->pc = 0x10CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD38u;
    // 0x10cd3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9C60u, 0x10CD38u, 0x10CD40u)) {
        return;
    }
    ctx->pc = 0x10CD40u;
label_10cd40:
    // 0x10cd40: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x10CD40u;
    {
        const bool branch_taken_0x10cd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD40u;
        // 0x10cd44: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd40) {
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CD48u;
label_10cd48:
    // 0x10cd48: 0x8c434338  lw          $v1, 0x4338($v0)
    ctx->pc = 0x10cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17208)));
    // 0x10cd4c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10CD4Cu;
    {
        const bool branch_taken_0x10cd4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD4Cu;
        // 0x10cd50: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd4c) {
            ctx->pc = 0x10CD68u;
            goto label_10cd68;
        }
    }
    ctx->pc = 0x10CD54u;
    // 0x10cd54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd58: 0xc04342a  jal         func_10D0A8
    ctx->pc = 0x10CD58u;
    SET_GPR_U32(ctx, 31, 0x10CD60u);
    ctx->pc = 0x10CD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD58u;
    // 0x10cd5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D0A8u, 0x10CD58u, 0x10CD60u)) {
        return;
    }
    ctx->pc = 0x10CD60u;
label_10cd60:
    // 0x10cd60: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x10CD60u;
    {
        const bool branch_taken_0x10cd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD60u;
        // 0x10cd64: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd60) {
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CD68u;
label_10cd68:
    // 0x10cd68: 0x8c434340  lw          $v1, 0x4340($v0)
    ctx->pc = 0x10cd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17216)));
    // 0x10cd6c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10CD6Cu;
    {
        const bool branch_taken_0x10cd6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD6Cu;
        // 0x10cd70: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd6c) {
            ctx->pc = 0x10CD88u;
            goto label_10cd88;
        }
    }
    ctx->pc = 0x10CD74u;
    // 0x10cd74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd78: 0xc0439d8  jal         func_10E760
    ctx->pc = 0x10CD78u;
    SET_GPR_U32(ctx, 31, 0x10CD80u);
    ctx->pc = 0x10CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD78u;
    // 0x10cd7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E760u, 0x10CD78u, 0x10CD80u)) {
        return;
    }
    ctx->pc = 0x10CD80u;
label_10cd80:
    // 0x10cd80: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x10CD80u;
    {
        const bool branch_taken_0x10cd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD80u;
        // 0x10cd84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd80) {
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CD88u;
label_10cd88:
    // 0x10cd88: 0x8c434348  lw          $v1, 0x4348($v0)
    ctx->pc = 0x10cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17224)));
    // 0x10cd8c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10CD8Cu;
    {
        const bool branch_taken_0x10cd8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD8Cu;
        // 0x10cd90: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd8c) {
            ctx->pc = 0x10CDA8u;
            goto label_10cda8;
        }
    }
    ctx->pc = 0x10CD94u;
    // 0x10cd94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cd98: 0xc04342a  jal         func_10D0A8
    ctx->pc = 0x10CD98u;
    SET_GPR_U32(ctx, 31, 0x10CDA0u);
    ctx->pc = 0x10CD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD98u;
    // 0x10cd9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D0A8u, 0x10CD98u, 0x10CDA0u)) {
        return;
    }
    ctx->pc = 0x10CDA0u;
label_10cda0:
    // 0x10cda0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x10CDA0u;
    {
        const bool branch_taken_0x10cda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDA0u;
        // 0x10cda4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cda0) {
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CDA8u;
label_10cda8:
    // 0x10cda8: 0x8c434350  lw          $v1, 0x4350($v0)
    ctx->pc = 0x10cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17232)));
    // 0x10cdac: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10CDACu;
    {
        const bool branch_taken_0x10cdac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDACu;
        // 0x10cdb0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cdac) {
            ctx->pc = 0x10CDC8u;
            goto label_10cdc8;
        }
    }
    ctx->pc = 0x10CDB4u;
    // 0x10cdb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdb8: 0xc0439d8  jal         func_10E760
    ctx->pc = 0x10CDB8u;
    SET_GPR_U32(ctx, 31, 0x10CDC0u);
    ctx->pc = 0x10CDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDB8u;
    // 0x10cdbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E760u, 0x10CDB8u, 0x10CDC0u)) {
        return;
    }
    ctx->pc = 0x10CDC0u;
label_10cdc0:
    // 0x10cdc0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x10CDC0u;
    {
        const bool branch_taken_0x10cdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDC0u;
        // 0x10cdc4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cdc0) {
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CDC8u;
label_10cdc8:
    // 0x10cdc8: 0x8c434358  lw          $v1, 0x4358($v0)
    ctx->pc = 0x10cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17240)));
    // 0x10cdcc: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10CDCCu;
    {
        const bool branch_taken_0x10cdcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDCCu;
        // 0x10cdd0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cdcc) {
            ctx->pc = 0x10CDE8u;
            goto label_10cde8;
        }
    }
    ctx->pc = 0x10CDD4u;
    // 0x10cdd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10cdd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10cdd8: 0xc043390  jal         func_10CE40
    ctx->pc = 0x10CDD8u;
    SET_GPR_U32(ctx, 31, 0x10CDE0u);
    ctx->pc = 0x10CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDD8u;
    // 0x10cddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CE40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10CE40u, 0x10CDD8u, 0x10CDE0u)) {
        return;
    }
    ctx->pc = 0x10CDE0u;
label_10cde0:
    // 0x10cde0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10CDE0u;
    {
        const bool branch_taken_0x10cde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDE0u;
        // 0x10cde4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cde0) {
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CDE8u;
label_10cde8:
    // 0x10cde8: 0x8c43f8b8  lw          $v1, -0x748($v0)
    ctx->pc = 0x10cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965432)));
    // 0x10cdec: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CDECu;
    {
        const bool branch_taken_0x10cdec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDECu;
        // 0x10cdf0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cdec) {
            ctx->pc = 0x10CE00u;
            goto label_10ce00;
        }
    }
    ctx->pc = 0x10CDF4u;
    // 0x10cdf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cdf8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10CDF8u;
    {
        const bool branch_taken_0x10cdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDF8u;
        // 0x10cdfc: 0xae0213f0  sw          $v0, 0x13F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cdf8) {
            ctx->pc = 0x10CE24u;
            goto label_10ce24;
        }
    }
    ctx->pc = 0x10CE00u;
label_10ce00:
    // 0x10ce00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10ce04: 0x8c43f8c0  lw          $v1, -0x740($v0)
    ctx->pc = 0x10ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965440)));
    // 0x10ce08: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10CE08u;
    {
        const bool branch_taken_0x10ce08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10ce08) {
            ctx->pc = 0x10CE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CE08u;
            // 0x10ce0c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CE28u;
            goto label_10ce28;
        }
    }
    ctx->pc = 0x10CE10u;
    // 0x10ce10: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10ce14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CE14u;
    {
        const bool branch_taken_0x10ce14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE14u;
        // 0x10ce18: 0xae0013f0  sw          $zero, 0x13F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce14) {
            ctx->pc = 0x10CE24u;
            goto label_10ce24;
        }
    }
    ctx->pc = 0x10CE1Cu;
    // 0x10ce1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ce20: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x10ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_10ce24:
    // 0x10ce24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10ce24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10ce28:
    // 0x10ce28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10ce28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ce2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10ce2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ce30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ce30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ce34: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE34u;
        // 0x10ce38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CE3Cu;
    // 0x10ce3c: 0x0  nop
    ctx->pc = 0x10ce3cu;
    // NOP
    ctx->pc = 0x10ce40u;
}
