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

// Function: sub_001CF220
// Address: 0x1cf220 - 0x1cf328
void sub_001CF220_0x1cf220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF220_0x1cf220");
#endif

    switch (ctx->pc) {
        case 0x1cf23cu: goto label_1cf23c;
        case 0x1cf280u: goto label_1cf280;
        case 0x1cf288u: goto label_1cf288;
        case 0x1cf29cu: goto label_1cf29c;
        case 0x1cf2b4u: goto label_1cf2b4;
        case 0x1cf2c8u: goto label_1cf2c8;
        case 0x1cf2dcu: goto label_1cf2dc;
        case 0x1cf2f4u: goto label_1cf2f4;
        case 0x1cf308u: goto label_1cf308;
        default: break;
    }

    ctx->pc = 0x1cf220u;

    // 0x1cf220: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cf220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cf224: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1cf224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1cf228: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1cf228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1cf22c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf230: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1cf230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1cf234: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1CF234u;
    SET_GPR_U32(ctx, 31, 0x1CF23Cu);
    ctx->pc = 0x1CF238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF234u;
    // 0x1cf238: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1CF234u, 0x1CF23Cu)) {
        return;
    }
    ctx->pc = 0x1CF23Cu;
label_1cf23c:
    // 0x1cf23c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1cf23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1cf240: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1cf240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cf244: 0x24630610  addiu       $v1, $v1, 0x610
    ctx->pc = 0x1cf244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1552));
    // 0x1cf248: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1cf248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1cf24c: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1cf24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x1cf250: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cf250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf254: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1cf254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1cf258: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cf258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cf25c: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1cf25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x1cf260: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x1cf260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x1cf264: 0xae000274  sw          $zero, 0x274($s0)
    ctx->pc = 0x1cf264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 0));
    // 0x1cf268: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x1cf268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
    // 0x1cf26c: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1cf26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1cf270: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1cf270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1cf274: 0xae030258  sw          $v1, 0x258($s0)
    ctx->pc = 0x1cf274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
    // 0x1cf278: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1CF278u;
    SET_GPR_U32(ctx, 31, 0x1CF280u);
    ctx->pc = 0x1CF27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF278u;
    // 0x1cf27c: 0xae02028c  sw          $v0, 0x28C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1CF278u, 0x1CF280u)) {
        return;
    }
    ctx->pc = 0x1CF280u;
label_1cf280:
    // 0x1cf280: 0xc06db44  jal         func_1B6D10
    ctx->pc = 0x1CF280u;
    SET_GPR_U32(ctx, 31, 0x1CF288u);
    ctx->pc = 0x1CF284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF280u;
    // 0x1cf284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D10u, 0x1CF280u, 0x1CF288u)) {
        return;
    }
    ctx->pc = 0x1CF288u;
label_1cf288:
    // 0x1cf288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cf288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf28c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf290: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1cf290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cf294: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CF294u;
    SET_GPR_U32(ctx, 31, 0x1CF29Cu);
    ctx->pc = 0x1CF298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF294u;
    // 0x1cf298: 0xae020260  sw          $v0, 0x260($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CF294u, 0x1CF29Cu)) {
        return;
    }
    ctx->pc = 0x1CF29Cu;
label_1cf29c:
    // 0x1cf29c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cf29cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cf2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2a4: 0x24a505f0  addiu       $a1, $a1, 0x5F0
    ctx->pc = 0x1cf2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1520));
    // 0x1cf2a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cf2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2ac: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CF2ACu;
    SET_GPR_U32(ctx, 31, 0x1CF2B4u);
    ctx->pc = 0x1CF2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2ACu;
    // 0x1cf2b0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CF2ACu, 0x1CF2B4u)) {
        return;
    }
    ctx->pc = 0x1CF2B4u;
label_1cf2b4:
    // 0x1cf2b4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cf2b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf2b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF2B8u;
    {
        const bool branch_taken_0x1cf2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2B8u;
        // 0x1cf2bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2b8) {
            ctx->pc = 0x1CF2CCu;
            goto label_1cf2cc;
        }
    }
    ctx->pc = 0x1CF2C0u;
    // 0x1cf2c0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CF2C0u;
    SET_GPR_U32(ctx, 31, 0x1CF2C8u);
    ctx->pc = 0x1CF2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2C0u;
    // 0x1cf2c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CF2C0u, 0x1CF2C8u)) {
        return;
    }
    ctx->pc = 0x1CF2C8u;
label_1cf2c8:
    // 0x1cf2c8: 0xae020268  sw          $v0, 0x268($s0)
    ctx->pc = 0x1cf2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
label_1cf2cc:
    // 0x1cf2cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cf2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2d4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CF2D4u;
    SET_GPR_U32(ctx, 31, 0x1CF2DCu);
    ctx->pc = 0x1CF2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2D4u;
    // 0x1cf2d8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CF2D4u, 0x1CF2DCu)) {
        return;
    }
    ctx->pc = 0x1CF2DCu;
label_1cf2dc:
    // 0x1cf2dc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cf2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cf2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2e4: 0x24a50600  addiu       $a1, $a1, 0x600
    ctx->pc = 0x1cf2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1536));
    // 0x1cf2e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cf2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2ec: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CF2ECu;
    SET_GPR_U32(ctx, 31, 0x1CF2F4u);
    ctx->pc = 0x1CF2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2ECu;
    // 0x1cf2f0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CF2ECu, 0x1CF2F4u)) {
        return;
    }
    ctx->pc = 0x1CF2F4u;
label_1cf2f4:
    // 0x1cf2f4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cf2f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf2f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF2F8u;
    {
        const bool branch_taken_0x1cf2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2F8u;
        // 0x1cf2fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2f8) {
            ctx->pc = 0x1CF30Cu;
            goto label_1cf30c;
        }
    }
    ctx->pc = 0x1CF300u;
    // 0x1cf300: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CF300u;
    SET_GPR_U32(ctx, 31, 0x1CF308u);
    ctx->pc = 0x1CF304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF300u;
    // 0x1cf304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CF300u, 0x1CF308u)) {
        return;
    }
    ctx->pc = 0x1CF308u;
label_1cf308:
    // 0x1cf308: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1cf308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
label_1cf30c:
    // 0x1cf30c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cf30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf310: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1cf310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cf314: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1cf314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cf318: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1cf318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cf31c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF31Cu;
        // 0x1cf320: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF324u;
    // 0x1cf324: 0x0  nop
    ctx->pc = 0x1cf324u;
    // NOP
    ctx->pc = 0x1cf328u;
}
