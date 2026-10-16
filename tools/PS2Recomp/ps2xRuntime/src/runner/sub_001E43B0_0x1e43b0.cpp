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

// Function: sub_001E43B0
// Address: 0x1e43b0 - 0x1e45a8
void sub_001E43B0_0x1e43b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E43B0_0x1e43b0");
#endif

    switch (ctx->pc) {
        case 0x1e43ecu: goto label_1e43ec;
        case 0x1e4420u: goto label_1e4420;
        case 0x1e4444u: goto label_1e4444;
        case 0x1e444cu: goto label_1e444c;
        case 0x1e447cu: goto label_1e447c;
        case 0x1e44a4u: goto label_1e44a4;
        case 0x1e4534u: goto label_1e4534;
        case 0x1e453cu: goto label_1e453c;
        case 0x1e454cu: goto label_1e454c;
        case 0x1e455cu: goto label_1e455c;
        case 0x1e456cu: goto label_1e456c;
        case 0x1e457cu: goto label_1e457c;
        case 0x1e458cu: goto label_1e458c;
        case 0x1e4594u: goto label_1e4594;
        default: break;
    }

    ctx->pc = 0x1e43b0u;

    // 0x1e43b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e43b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e43b4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e43b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e43b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e43bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e43bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e43c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e43c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e43c4: 0x8c44e718  lw          $a0, -0x18E8($v0)
    ctx->pc = 0x1e43c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33E718u));
    // 0x1e43c8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E43C8u;
    {
        const bool branch_taken_0x1e43c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43C8u;
        // 0x1e43cc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43c8) {
            ctx->pc = 0x1E43ECu;
            goto label_1e43ec;
        }
    }
    ctx->pc = 0x1E43D0u;
    // 0x1e43d0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e43d4: 0x8c43e6f4  lw          $v1, -0x190C($v0)
    ctx->pc = 0x1e43d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E6F4u));
    // 0x1e43d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E43D8u;
    {
        const bool branch_taken_0x1e43d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43D8u;
        // 0x1e43dc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43d8) {
            ctx->pc = 0x1E43F0u;
            goto label_1e43f0;
        }
    }
    ctx->pc = 0x1E43E0u;
    // 0x1e43e0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1e43e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e43e4: 0xc07956e  jal         func_1E55B8
    ctx->pc = 0x1E43E4u;
    SET_GPR_U32(ctx, 31, 0x1E43ECu);
    ctx->pc = 0x1E43E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E43E4u;
    // 0x1e43e8: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E55B8u, 0x1E43E4u, 0x1E43ECu)) {
        return;
    }
    ctx->pc = 0x1E43ECu;
label_1e43ec:
    // 0x1e43ec: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1e43f0:
    // 0x1e43f0: 0x8c44e724  lw          $a0, -0x18DC($v0)
    ctx->pc = 0x1e43f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960932)));
    // 0x1e43f4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E43F4u;
    {
        const bool branch_taken_0x1e43f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43F4u;
        // 0x1e43f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43f4) {
            ctx->pc = 0x1E444Cu;
            goto label_1e444c;
        }
    }
    ctx->pc = 0x1E43FCu;
    // 0x1e43fc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e4400: 0x8c43e6f8  lw          $v1, -0x1908($v0)
    ctx->pc = 0x1e4400u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E6F8u));
    // 0x1e4404: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4404u;
    {
        const bool branch_taken_0x1e4404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4404u;
        // 0x1e4408: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4404) {
            ctx->pc = 0x1E4420u;
            goto label_1e4420;
        }
    }
    ctx->pc = 0x1E440Cu;
    // 0x1e440c: 0x8c46e72c  lw          $a2, -0x18D4($v0)
    ctx->pc = 0x1e440cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960940)));
    // 0x1e4410: 0x50c00004  beql        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4410u;
    {
        const bool branch_taken_0x1e4410 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4410) {
            ctx->pc = 0x1E4414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4410u;
            // 0x1e4414: 0x8e24e724  lw          $a0, -0x18DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960932)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4424u;
            goto label_1e4424;
        }
    }
    ctx->pc = 0x1E4418u;
    // 0x1e4418: 0xc0797e6  jal         func_1E5F98
    ctx->pc = 0x1E4418u;
    SET_GPR_U32(ctx, 31, 0x1E4420u);
    ctx->pc = 0x1E441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4418u;
    // 0x1e441c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E5F98u, 0x1E4418u, 0x1E4420u)) {
        return;
    }
    ctx->pc = 0x1E4420u;
label_1e4420:
    // 0x1e4420: 0x8e24e724  lw          $a0, -0x18DC($s1)
    ctx->pc = 0x1e4420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960932)));
label_1e4424:
    // 0x1e4424: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4424u;
    {
        const bool branch_taken_0x1e4424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4424u;
        // 0x1e4428: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4424) {
            ctx->pc = 0x1E444Cu;
            goto label_1e444c;
        }
    }
    ctx->pc = 0x1E442Cu;
    // 0x1e442c: 0x8c43e704  lw          $v1, -0x18FC($v0)
    ctx->pc = 0x1e442cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960900)));
    // 0x1e4430: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4430u;
    {
        const bool branch_taken_0x1e4430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4430u;
        // 0x1e4434: 0x3c060070  lui         $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4430) {
            ctx->pc = 0x1E444Cu;
            goto label_1e444c;
        }
    }
    ctx->pc = 0x1E4438u;
    // 0x1e4438: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1e4438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e443c: 0xc0797e6  jal         func_1E5F98
    ctx->pc = 0x1E443Cu;
    SET_GPR_U32(ctx, 31, 0x1E4444u);
    ctx->pc = 0x1E4440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E443Cu;
    // 0x1e4440: 0x24c69b80  addiu       $a2, $a2, -0x6480 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E5F98u, 0x1E443Cu, 0x1E4444u)) {
        return;
    }
    ctx->pc = 0x1E4444u;
label_1e4444:
    // 0x1e4444: 0xc079066  jal         func_1E4198
    ctx->pc = 0x1E4444u;
    SET_GPR_U32(ctx, 31, 0x1E444Cu);
    ctx->pc = 0x1E4448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4444u;
    // 0x1e4448: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4198u, 0x1E4444u, 0x1E444Cu)) {
        return;
    }
    ctx->pc = 0x1E444Cu;
label_1e444c:
    // 0x1e444c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e4450: 0x8c44e720  lw          $a0, -0x18E0($v0)
    ctx->pc = 0x1e4450u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33E720u));
    // 0x1e4454: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4454u;
    {
        const bool branch_taken_0x1e4454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4454u;
        // 0x1e4458: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4454) {
            ctx->pc = 0x1E447Cu;
            goto label_1e447c;
        }
    }
    ctx->pc = 0x1E445Cu;
    // 0x1e445c: 0x8c43e700  lw          $v1, -0x1900($v0)
    ctx->pc = 0x1e445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960896)));
    // 0x1e4460: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E4460u;
    {
        const bool branch_taken_0x1e4460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4460u;
        // 0x1e4464: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4460) {
            ctx->pc = 0x1E4480u;
            goto label_1e4480;
        }
    }
    ctx->pc = 0x1E4468u;
    // 0x1e4468: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1e4468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e446c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1e446cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4470: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1e4470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e4474: 0xc079b1c  jal         func_1E6C70
    ctx->pc = 0x1E4474u;
    SET_GPR_U32(ctx, 31, 0x1E447Cu);
    ctx->pc = 0x1E4478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4474u;
    // 0x1e4478: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E6C70u, 0x1E4474u, 0x1E447Cu)) {
        return;
    }
    ctx->pc = 0x1E447Cu;
label_1e447c:
    // 0x1e447c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1e4480:
    // 0x1e4480: 0x8c44e71c  lw          $a0, -0x18E4($v0)
    ctx->pc = 0x1e4480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960924)));
    // 0x1e4484: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E4484u;
    {
        const bool branch_taken_0x1e4484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4484u;
        // 0x1e4488: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4484) {
            ctx->pc = 0x1E44A4u;
            goto label_1e44a4;
        }
    }
    ctx->pc = 0x1E448Cu;
    // 0x1e448c: 0x8c43e6fc  lw          $v1, -0x1904($v0)
    ctx->pc = 0x1e448cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960892)));
    // 0x1e4490: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4490u;
    {
        const bool branch_taken_0x1e4490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4490u;
        // 0x1e4494: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4490) {
            ctx->pc = 0x1E44A4u;
            goto label_1e44a4;
        }
    }
    ctx->pc = 0x1E4498u;
    // 0x1e4498: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1e4498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e449c: 0xc0798cc  jal         func_1E6330
    ctx->pc = 0x1E449Cu;
    SET_GPR_U32(ctx, 31, 0x1E44A4u);
    ctx->pc = 0x1E44A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E449Cu;
    // 0x1e44a0: 0xc44ce708  lwc1        $f12, -0x18F8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E6330u, 0x1E449Cu, 0x1E44A4u)) {
        return;
    }
    ctx->pc = 0x1E44A4u;
label_1e44a4:
    // 0x1e44a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e44a8: 0x8c44e728  lw          $a0, -0x18D8($v0)
    ctx->pc = 0x1e44a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33E728u));
    // 0x1e44ac: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E44ACu;
    {
        const bool branch_taken_0x1e44ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44ACu;
        // 0x1e44b0: 0x3c060034  lui         $a2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44ac) {
            ctx->pc = 0x1E4534u;
            goto label_1e4534;
        }
    }
    ctx->pc = 0x1E44B4u;
    // 0x1e44b4: 0x8cc3e70c  lw          $v1, -0x18F4($a2)
    ctx->pc = 0x1e44b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960908)));
    // 0x1e44b8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E44B8u;
    {
        const bool branch_taken_0x1e44b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44B8u;
        // 0x1e44bc: 0x3c050034  lui         $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44b8) {
            ctx->pc = 0x1E4534u;
            goto label_1e4534;
        }
    }
    ctx->pc = 0x1E44C0u;
    // 0x1e44c0: 0x8ca2e710  lw          $v0, -0x18F0($a1)
    ctx->pc = 0x1e44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960912)));
    // 0x1e44c4: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E44C4u;
    {
        const bool branch_taken_0x1e44c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44C4u;
        // 0x1e44c8: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44c4) {
            ctx->pc = 0x1E4534u;
            goto label_1e4534;
        }
    }
    ctx->pc = 0x1E44CCu;
    // 0x1e44cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E44CCu;
    {
        const bool branch_taken_0x1e44cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44CCu;
        // 0x1e44d0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44cc) {
            ctx->pc = 0x1E44D8u;
            goto label_1e44d8;
        }
    }
    ctx->pc = 0x1E44D4u;
    // 0x1e44d4: 0xacc2e70c  sw          $v0, -0x18F4($a2)
    ctx->pc = 0x1e44d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960908), GPR_U32(ctx, 2));
label_1e44d8:
    // 0x1e44d8: 0x8cc2e70c  lw          $v0, -0x18F4($a2)
    ctx->pc = 0x1e44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960908)));
    // 0x1e44dc: 0x2842005b  slti        $v0, $v0, 0x5B
    ctx->pc = 0x1e44dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x1e44e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E44E0u;
    {
        const bool branch_taken_0x1e44e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44E0u;
        // 0x1e44e4: 0x90a3e710  lbu         $v1, -0x18F0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294960912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44e0) {
            ctx->pc = 0x1E44F4u;
            goto label_1e44f4;
        }
    }
    ctx->pc = 0x1E44E8u;
    // 0x1e44e8: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1e44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1e44ec: 0xacc2e70c  sw          $v0, -0x18F4($a2)
    ctx->pc = 0x1e44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294960908), GPR_U32(ctx, 2));
    // 0x1e44f0: 0x90a3e710  lbu         $v1, -0x18F0($a1)
    ctx->pc = 0x1e44f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294960912)));
label_1e44f4:
    // 0x1e44f4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1e44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e44f8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1e44f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e44fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e44fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4500: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x1e4500u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x1e4504: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x1e4504u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4508: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x1e4508u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e450c: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x1e450cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4510: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x1e4510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1e4514: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x1e4514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1e4518: 0xaba20013  swl         $v0, 0x13($sp)
    ctx->pc = 0x1e4518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1e451c: 0xbba20010  swr         $v0, 0x10($sp)
    ctx->pc = 0x1e451cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1e4520: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1e4520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4524: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x1e4524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4528: 0x8cc6e70c  lw          $a2, -0x18F4($a2)
    ctx->pc = 0x1e4528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960908)));
    // 0x1e452c: 0xc0796a0  jal         func_1E5A80
    ctx->pc = 0x1E452Cu;
    SET_GPR_U32(ctx, 31, 0x1E4534u);
    ctx->pc = 0x1E4530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E452Cu;
    // 0x1e4530: 0xe83824  and         $a3, $a3, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E5A80u, 0x1E452Cu, 0x1E4534u)) {
        return;
    }
    ctx->pc = 0x1E4534u;
label_1e4534:
    // 0x1e4534: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E4534u;
    SET_GPR_U32(ctx, 31, 0x1E453Cu);
    ctx->pc = 0x1E4538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4534u;
    // 0x1e4538: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E4534u, 0x1E453Cu)) {
        return;
    }
    ctx->pc = 0x1E453Cu;
label_1e453c:
    // 0x1e453c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1e453cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1e4540: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e4540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e4544: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4544u;
    SET_GPR_U32(ctx, 31, 0x1E454Cu);
    ctx->pc = 0x1E4548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4544u;
    // 0x1e4548: 0xdc653500  ld          $a1, 0x3500($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 13568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4544u, 0x1E454Cu)) {
        return;
    }
    ctx->pc = 0x1E454Cu;
label_1e454c:
    // 0x1e454c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e454cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e4550: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x1e4550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1e4554: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4554u;
    SET_GPR_U32(ctx, 31, 0x1E455Cu);
    ctx->pc = 0x1E4558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4554u;
    // 0x1e4558: 0xdc4534d0  ld          $a1, 0x34D0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13520)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4554u, 0x1E455Cu)) {
        return;
    }
    ctx->pc = 0x1E455Cu;
label_1e455c:
    // 0x1e455c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e455cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e4560: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e4560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e4564: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4564u;
    SET_GPR_U32(ctx, 31, 0x1E456Cu);
    ctx->pc = 0x1E4568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4564u;
    // 0x1e4568: 0xdc4534c0  ld          $a1, 0x34C0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4564u, 0x1E456Cu)) {
        return;
    }
    ctx->pc = 0x1E456Cu;
label_1e456c:
    // 0x1e456c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e456cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e4570: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1e4570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1e4574: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4574u;
    SET_GPR_U32(ctx, 31, 0x1E457Cu);
    ctx->pc = 0x1E4578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4574u;
    // 0x1e4578: 0xdc4534c8  ld          $a1, 0x34C8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4574u, 0x1E457Cu)) {
        return;
    }
    ctx->pc = 0x1E457Cu;
label_1e457c:
    // 0x1e457c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e457cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e4580: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1e4580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e4584: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E4584u;
    SET_GPR_U32(ctx, 31, 0x1E458Cu);
    ctx->pc = 0x1E4588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4584u;
    // 0x1e4588: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E4584u, 0x1E458Cu)) {
        return;
    }
    ctx->pc = 0x1E458Cu;
label_1e458c:
    // 0x1e458c: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E458Cu;
    SET_GPR_U32(ctx, 31, 0x1E4594u);
    ctx->pc = 0x1E4590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E458Cu;
    // 0x1e4590: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E458Cu, 0x1E4594u)) {
        return;
    }
    ctx->pc = 0x1E4594u;
label_1e4594:
    // 0x1e4594: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e4594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4598: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e4598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e459c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e459cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e45a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E45A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45A0u;
        // 0x1e45a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E45A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E45A8u;
}
