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

// Function: sub_001BC1E0
// Address: 0x1bc1e0 - 0x1bc300
void sub_001BC1E0_0x1bc1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC1E0_0x1bc1e0");
#endif

    switch (ctx->pc) {
        case 0x1bc208u: goto label_1bc208;
        case 0x1bc23cu: goto label_1bc23c;
        case 0x1bc2b0u: goto label_1bc2b0;
        case 0x1bc2e8u: goto label_1bc2e8;
        default: break;
    }

    ctx->pc = 0x1bc1e0u;

    // 0x1bc1e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bc1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bc1e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bc1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bc1e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bc1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bc1ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc1f0: 0x8c8202dc  lw          $v0, 0x2DC($a0)
    ctx->pc = 0x1bc1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 732)));
    // 0x1bc1f4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bc1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bc1f8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC1F8u;
    {
        const bool branch_taken_0x1bc1f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1F8u;
        // 0x1bc1fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc1f8) {
            ctx->pc = 0x1BC220u;
            goto label_1bc220;
        }
    }
    ctx->pc = 0x1BC200u;
    // 0x1bc200: 0x8c840320  lw          $a0, 0x320($a0)
    ctx->pc = 0x1bc200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x1bc204: 0x0  nop
    ctx->pc = 0x1bc204u;
    // NOP
label_1bc208:
    // 0x1bc208: 0x50640007  beql        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC208u;
    {
        const bool branch_taken_0x1bc208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bc208) {
            ctx->pc = 0x1BC20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC208u;
            // 0x1bc20c: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC228u;
            goto label_1bc228;
        }
    }
    ctx->pc = 0x1BC210u;
    // 0x1bc210: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1bc210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bc214: 0x0  nop
    ctx->pc = 0x1bc214u;
    // NOP
    // 0x1bc218: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BC218u;
    {
        const bool branch_taken_0x1bc218 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC218u;
        // 0x1bc21c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc218) {
            ctx->pc = 0x1BC208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc208;
        }
    }
    ctx->pc = 0x1BC220u;
label_1bc220:
    // 0x1bc220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc224: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1bc224u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x0u));
label_1bc228:
    // 0x1bc228: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bc228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bc22c: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x1bc22cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338B2Cu));
    // 0x1bc230: 0x8e110068  lw          $s1, 0x68($s0)
    ctx->pc = 0x1bc230u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1bc234: 0xc063eba  jal         func_18FAE8
    ctx->pc = 0x1BC234u;
    SET_GPR_U32(ctx, 31, 0x1BC23Cu);
    ctx->pc = 0x1BC238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC234u;
    // 0x1bc238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FAE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18FAE8u, 0x1BC234u, 0x1BC23Cu)) {
        return;
    }
    ctx->pc = 0x1BC23Cu;
label_1bc23c:
    // 0x1bc23c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BC23Cu;
    {
        const bool branch_taken_0x1bc23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC23Cu;
        // 0x1bc240: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc23c) {
            ctx->pc = 0x1BC2E8u;
            goto label_1bc2e8;
        }
    }
    ctx->pc = 0x1BC244u;
    // 0x1bc244: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x1bc244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1bc248: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC248u;
    {
        const bool branch_taken_0x1bc248 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC248u;
        // 0x1bc24c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc248) {
            ctx->pc = 0x1BC274u;
            goto label_1bc274;
        }
    }
    ctx->pc = 0x1BC250u;
    // 0x1bc250: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC250u;
    {
        const bool branch_taken_0x1bc250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC250u;
        // 0x1bc254: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc250) {
            ctx->pc = 0x1BC264u;
            goto label_1bc264;
        }
    }
    ctx->pc = 0x1BC258u;
    // 0x1bc258: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bc258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bc25c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BC25Cu;
    {
        const bool branch_taken_0x1bc25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC25Cu;
        // 0x1bc260: 0x8c454480  lw          $a1, 0x4480($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc25c) {
            ctx->pc = 0x1BC28Cu;
            goto label_1bc28c;
        }
    }
    ctx->pc = 0x1BC264u;
label_1bc264:
    // 0x1bc264: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bc264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1bc268: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bc268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bc26c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC26Cu;
    {
        const bool branch_taken_0x1bc26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC26Cu;
        // 0x1bc270: 0x8c454478  lw          $a1, 0x4478($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc26c) {
            ctx->pc = 0x1BC28Cu;
            goto label_1bc28c;
        }
    }
    ctx->pc = 0x1BC274u;
label_1bc274:
    // 0x1bc274: 0x14a2001d  bne         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BC274u;
    {
        const bool branch_taken_0x1bc274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC274u;
        // 0x1bc278: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc274) {
            ctx->pc = 0x1BC2ECu;
            goto label_1bc2ec;
        }
    }
    ctx->pc = 0x1BC27Cu;
    // 0x1bc27c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BC27Cu;
    {
        const bool branch_taken_0x1bc27c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC27Cu;
        // 0x1bc280: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc27c) {
            ctx->pc = 0x1BC2B8u;
            goto label_1bc2b8;
        }
    }
    ctx->pc = 0x1BC284u;
    // 0x1bc284: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bc284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bc288: 0x8c454450  lw          $a1, 0x4450($v0)
    ctx->pc = 0x1bc288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17488)));
label_1bc28c:
    // 0x1bc28c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bc28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
    // 0x1bc290: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BC290u;
    {
        const bool branch_taken_0x1bc290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC290u;
        // 0x1bc294: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc290) {
            ctx->pc = 0x1BC2ECu;
            goto label_1bc2ec;
        }
    }
    ctx->pc = 0x1BC298u;
    // 0x1bc298: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bc298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc29c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BC29Cu;
    {
        const bool branch_taken_0x1bc29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC29Cu;
        // 0x1bc2a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc29c) {
            ctx->pc = 0x1BC2ECu;
            goto label_1bc2ec;
        }
    }
    ctx->pc = 0x1BC2A4u;
    // 0x1bc2a4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bc2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bc2a8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BC2A8u;
    SET_GPR_U32(ctx, 31, 0x1BC2B0u);
    ctx->pc = 0x1BC2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC2A8u;
    // 0x1bc2ac: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BC2A8u, 0x1BC2B0u)) {
        return;
    }
    ctx->pc = 0x1BC2B0u;
label_1bc2b0:
    // 0x1bc2b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BC2B0u;
    {
        const bool branch_taken_0x1bc2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2B0u;
        // 0x1bc2b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2b0) {
            ctx->pc = 0x1BC2ECu;
            goto label_1bc2ec;
        }
    }
    ctx->pc = 0x1BC2B8u;
label_1bc2b8:
    // 0x1bc2b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bc2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1bc2bc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bc2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bc2c0: 0x8c454448  lw          $a1, 0x4448($v0)
    ctx->pc = 0x1bc2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4448u));
    // 0x1bc2c4: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bc2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bc2c8: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC2C8u;
    {
        const bool branch_taken_0x1bc2c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2C8u;
        // 0x1bc2cc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2c8) {
            ctx->pc = 0x1BC2ECu;
            goto label_1bc2ec;
        }
    }
    ctx->pc = 0x1BC2D0u;
    // 0x1bc2d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bc2d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC2D4u;
    {
        const bool branch_taken_0x1bc2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2D4u;
        // 0x1bc2d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2d4) {
            ctx->pc = 0x1BC2ECu;
            goto label_1bc2ec;
        }
    }
    ctx->pc = 0x1BC2DCu;
    // 0x1bc2dc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bc2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bc2e0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BC2E0u;
    SET_GPR_U32(ctx, 31, 0x1BC2E8u);
    ctx->pc = 0x1BC2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC2E0u;
    // 0x1bc2e4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BC2E0u, 0x1BC2E8u)) {
        return;
    }
    ctx->pc = 0x1BC2E8u;
label_1bc2e8:
    // 0x1bc2e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bc2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bc2ec:
    // 0x1bc2ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bc2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc2f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2F4u;
        // 0x1bc2f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC2FCu;
    // 0x1bc2fc: 0x0  nop
    ctx->pc = 0x1bc2fcu;
    // NOP
    ctx->pc = 0x1bc300u;
}
