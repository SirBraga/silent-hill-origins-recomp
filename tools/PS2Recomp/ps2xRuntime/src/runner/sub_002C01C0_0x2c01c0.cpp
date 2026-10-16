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

// Function: sub_002C01C0
// Address: 0x2c01c0 - 0x2c0328
void sub_002C01C0_0x2c01c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C01C0_0x2c01c0");
#endif

    switch (ctx->pc) {
        case 0x2c0278u: goto label_2c0278;
        case 0x2c02c4u: goto label_2c02c4;
        case 0x2c02f4u: goto label_2c02f4;
        default: break;
    }

    ctx->pc = 0x2c01c0u;

    // 0x2c01c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c01c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c01c4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2c01c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2c01c8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2c01c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2c01cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c01ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01d0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2c01d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2c01d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c01d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01d8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2c01d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2c01dc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2c01dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01e0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2c01e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2c01e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c01e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01e8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2c01e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2c01ec: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2c01ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c01f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c01f4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2c01f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01f8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2c01f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2c01fc: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2c01fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0200: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2c0200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2c0204: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x2c0204u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c0208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c020c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2c020cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0210: 0x8fbe00b0  lw          $fp, 0xB0($sp)
    ctx->pc = 0x2c0210u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c0214: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C0214u;
    {
        const bool branch_taken_0x2c0214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0214u;
        // 0x2c0218: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0214) {
            ctx->pc = 0x2C0298u;
            goto label_2c0298;
        }
    }
    ctx->pc = 0x2C021Cu;
    // 0x2c021c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c021cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0220: 0x1a00000f  blez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C0220u;
    {
        const bool branch_taken_0x2c0220 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x2C0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0220u;
        // 0x2c0224: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0220) {
            ctx->pc = 0x2C0260u;
            goto label_2c0260;
        }
    }
    ctx->pc = 0x2C0228u;
    // 0x2c0228: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C0228u;
    {
        const bool branch_taken_0x2c0228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0228u;
        // 0x2c022c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0228) {
            ctx->pc = 0x2C0278u;
            goto label_2c0278;
        }
    }
    ctx->pc = 0x2C0230u;
    // 0x2c0230: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2c0230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c0234: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C0234u;
    {
        const bool branch_taken_0x2c0234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0234) {
            ctx->pc = 0x2C0238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0234u;
            // 0x2c0238: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0264u;
            goto label_2c0264;
        }
    }
    ctx->pc = 0x2C023Cu;
    // 0x2c023c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c023cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c0240: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0240u;
    {
        const bool branch_taken_0x2c0240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0240) {
            ctx->pc = 0x2C0244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0240u;
            // 0x2c0244: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0258u;
            goto label_2c0258;
        }
    }
    ctx->pc = 0x2C0248u;
    // 0x2c0248: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2c0248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2c024c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2c024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2c0250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c0250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0254: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c0254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2c0258:
    // 0x2c0258: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c0258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c025c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2c025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2c0260:
    // 0x2c0260: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c0260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2c0264:
    // 0x2c0264: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c0264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c0268: 0xb0182b  sltu        $v1, $a1, $s0
    ctx->pc = 0x2c0268u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c026c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C026Cu;
    {
        const bool branch_taken_0x2c026c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C026Cu;
        // 0x2c0270: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c026c) {
            ctx->pc = 0x2C0298u;
            goto label_2c0298;
        }
    }
    ctx->pc = 0x2C0274u;
    // 0x2c0274: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c0274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c0278:
    // 0x2c0278: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c0278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c027c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2c027cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2c0280: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2c0280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2c0284: 0xb0182b  sltu        $v1, $a1, $s0
    ctx->pc = 0x2c0284u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c0288: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2c0288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2c028c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2c028cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2c0290: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C0290u;
    {
        const bool branch_taken_0x2c0290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0290u;
        // 0x2c0294: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0290) {
            ctx->pc = 0x2C0278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0278;
        }
    }
    ctx->pc = 0x2C0298u;
label_2c0298:
    // 0x2c0298: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c0298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c029c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c029cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c02a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c02a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c02a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02ac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2c02acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02b0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2c02b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02b4: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2c02b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02b8: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x2c02b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02bc: 0xc0afbec  jal         func_2BEFB0
    ctx->pc = 0x2C02BCu;
    SET_GPR_U32(ctx, 31, 0x2C02C4u);
    ctx->pc = 0x2C02C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C02BCu;
    // 0x2c02c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BEFB0u, 0x2C02BCu, 0x2C02C4u)) {
        return;
    }
    ctx->pc = 0x2C02C4u;
label_2c02c4:
    // 0x2c02c4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c02c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c02c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02cc: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x2c02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x2c02d0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c02d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c02d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2c02d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02dc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c02dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02e0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2c02e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02e4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2c02e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02e8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2c02e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c02ec: 0xc0afef6  jal         func_2BFBD8
    ctx->pc = 0x2C02ECu;
    SET_GPR_U32(ctx, 31, 0x2C02F4u);
    ctx->pc = 0x2C02F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C02ECu;
    // 0x2c02f0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFBD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BFBD8u, 0x2C02ECu, 0x2C02F4u)) {
        return;
    }
    ctx->pc = 0x2C02F4u;
label_2c02f4:
    // 0x2c02f4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2c02f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c02f8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2c02f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c02fc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2c02fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c0300: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2c0300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c0304: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2c0304u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c0308: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c0308u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c030c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2c030cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0310: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2c0310u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0314: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2c0314u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c0318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c031c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C031Cu;
        // 0x2c0320: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C031Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0324u;
    // 0x2c0324: 0x0  nop
    ctx->pc = 0x2c0324u;
    // NOP
    ctx->pc = 0x2c0328u;
}
